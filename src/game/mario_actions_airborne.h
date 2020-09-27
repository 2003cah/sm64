#ifndef MARIO_ACTIONS_AIRBORNE_H
#define MARIO_ACTIONS_AIRBORNE_H

#include <PR/ultratypes.h>

#include "types.h"

s32 mario_execute_airborne_action(struct MarioState *m);
s32 check_airhop(struct MarioState *m);

#endif // MARIO_ACTIONS_AIRBORNE_H
