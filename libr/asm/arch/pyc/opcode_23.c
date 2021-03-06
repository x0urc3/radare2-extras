#include "opcode.h"

pyc_opcodes *opcode_23 () {
	pyc_opcodes *ret = opcode_2x ();
	if (!ret)
		return NULL;

	r_list_purge (ret->opcode_arg_fmt);
	add_arg_fmt (ret, "EXTENDED_ARG", format_extended_arg);

	return ret;
}
