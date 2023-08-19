#pragma once
#include <cstdint>
namespace EAnimNotifyEventType {
#pragma pack(push, 1)
enum Type : uint8_t {
    Begin = 0,
    End = 1,
    EAnimNotifyEventType_MAX = 2,
};
#pragma pack(pop)
}
