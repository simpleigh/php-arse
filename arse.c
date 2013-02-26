#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"
#include "php_arse.h"

/* {{{ arse_functions[]
 */
const zend_function_entry arse_functions[] = {
	PHP_FE(arse, NULL)
	PHP_FE_END
};
/* }}} */

/* {{{ arse_module_entry
 */
zend_module_entry arse_module_entry = {
	STANDARD_MODULE_HEADER,
	"arse",
	arse_functions,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	"0.1",
	STANDARD_MODULE_PROPERTIES
};
/* }}} */

#ifdef COMPILE_DL_ARSE
ZEND_GET_MODULE(arse)
#endif

/* {{{ proto  arse()
    */
PHP_FUNCTION(arse)
{
	long l = 1;
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "|l", &l) == FAILURE) {
		return;
	}

	if (l < 1) {
		php_error(E_ERROR, "Invalid number of arses");
	}

	for (; l>0; l--)
		php_printf("You're an arse!\n");
		//printf("You're an arse!\n");

	return;
}
/* }}} */
