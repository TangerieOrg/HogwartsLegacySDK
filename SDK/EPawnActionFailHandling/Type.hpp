#pragma once
#include <cstdint>
namespace EPawnActionFailHandling {
#pragma pack(push, 1)
enum Type : uint8_t {
    RequireSuccess = 0,
    IgnoreFailure = 1,
    EPawnActionFailHandling_MAX = 2,
};
#pragma pack(pop)
}
