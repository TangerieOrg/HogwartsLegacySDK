#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_QBUpdateProcessingType {
    NPCList = 0,
    QBAttackData = 1,
    Both = 2,
    Custom = 3,
    ENPC_MAX = 4,
};
#pragma pack(pop)
