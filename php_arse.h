#ifndef PHP_ARSE_H
#define PHP_ARSE_H

extern zend_module_entry arse_module_entry;
#define phpext_arse_ptr &arse_module_entry

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_FUNCTION(arse);

#endif	/* PHP_ARSE_H */
