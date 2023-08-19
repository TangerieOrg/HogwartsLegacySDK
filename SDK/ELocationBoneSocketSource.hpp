#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ELocationBoneSocketSource : uint8_t {
    BONESOCKETSOURCE_Bones = 0,
    BONESOCKETSOURCE_Sockets = 1,
    BONESOCKETSOURCE_MAX = 2,
};
#pragma pack(pop)
