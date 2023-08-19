#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFastArraySerializerDeltaFlags : uint8_t {
    None = 0,
    HasBeenSerialized = 1,
    HasDeltaBeenRequested = 2,
    IsUsingDeltaSerialization = 4,
    EFastArraySerializerDeltaFlags_MAX = 5,
};
#pragma pack(pop)
