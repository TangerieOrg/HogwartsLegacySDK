#pragma once
#include <cstdint>
namespace EHMDTrackingOrigin {
#pragma pack(push, 1)
enum Type : uint8_t {
    Floor = 0,
    Eye = 1,
    Stage = 2,
    EHMDTrackingOrigin_MAX = 3,
};
#pragma pack(pop)
}
