#pragma once
#include <cstdint>
namespace EChromaSDKStreamStatusEnum {
#pragma pack(push, 1)
enum Type : uint8_t {
    READY = 0,
    AUTHORIZING = 1,
    BROADCASTING = 2,
    WATCHING = 3,
    NOT_AUTHORIZED = 4,
    BROADCAST_DUPLICATE = 5,
    SERVICE_OFFLINE = 6,
    EChromaSDKStreamStatusEnum_MAX = 7,
};
#pragma pack(pop)
}
