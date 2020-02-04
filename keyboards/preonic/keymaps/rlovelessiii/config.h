#pragma once

#define PREONIC_WRAPPER
#define PERMISSIVE_HOLD

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PREONIC_SOUND)
#endif
