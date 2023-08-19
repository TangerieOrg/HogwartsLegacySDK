#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFontLoadingPolicy : uint8_t {
    LazyLoad = 0,
    Stream = 1,
    Inline = 2,
    EFontLoadingPolicy_MAX = 3,
};
#pragma pack(pop)
