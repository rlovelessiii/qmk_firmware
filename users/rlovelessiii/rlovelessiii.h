#pragma once

#include QMK_KEYBOARD_H
#include "wrappers.h"
#include "process_records.h"

#ifdef CRKBD_WRAPPER
#include "crkbd_wrappers.h"
#endif

#ifdef PREONIC_WRAPPER
#include "preonic_wrappers.h"
#endif

#ifdef XD75_WRAPPER
#include "xd75_wrappers.h"
#endif

#ifdef ERGODOX_WRAPPER
#include "ergodox_wrappers.h"
#endif
