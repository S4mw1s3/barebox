#include <common.h>
#include <command.h>
#include <module.h>
#include <errno.h>
#include <fs.h>
#include <malloc.h>

static int do_insmod (cmd_tbl_t *cmdtp, int argc, char *argv[])
{
	struct module *module;
	void *buf;
	int len;

	if (argc < 2) {
		u_boot_cmd_usage(cmdtp);
		return 1;
	}

	buf = read_file(argv[1], &len);
	if (!buf) {
		perror("insmod");
		return 1;
	}

	module = load_module(buf, len);

	free(buf);

	if (module) {
		if (module->init)
			module->init();
	}

	return 0;
}

static const __maybe_unused char cmd_insmod_help[] =
"Usage: insmod <module>\n"; 

U_BOOT_CMD_START(insmod)
	.maxargs	= 2,
	.cmd		= do_insmod,
	.usage		= "insert a module",
	U_BOOT_CMD_HELP(cmd_insmod_help)
U_BOOT_CMD_END