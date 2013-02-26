#ifndef PHP_ARSE_H
#define PHP_ARSE_H

extern zend_module_entry arse_module_entry;
#define phpext_arse_ptr &arse_module_entry

#ifdef PHP_WIN32
#	define PHP_ARSE_API __declspec(dllexport)
#elif defined(__GNUC__) && __GNUC__ >= 4
#	define PHP_ARSE_API __attribute__ ((visibility("default")))
#else
#	define PHP_ARSE_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_FUNCTION(arse);

#endif	/* PHP_ARSE_H */
