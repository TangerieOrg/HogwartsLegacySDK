#pragma once
#include <cstdint>
namespace ECustomDepthStencil {
#pragma pack(push, 1)
enum Type : uint8_t {
    Disabled = 0,
    Enabled = 1,
    EnabledOnDemand = 2,
    EnabledWithStencil = 3,
    ECustomDepthStencil_MAX = 4,
};
#pragma pack(pop)
}
