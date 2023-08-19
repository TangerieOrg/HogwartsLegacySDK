#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMaterialLayerLinkState {
    Uninitialized = 0,
    LinkedToParent = 1,
    UnlinkedFromParent = 2,
    NotFromParent = 3,
    EMaterialLayerLinkState_MAX = 4,
};
#pragma pack(pop)
