#pragma once
#include <cstdint>
namespace EAudioOutputTarget {
#pragma pack(push, 1)
enum Type : uint8_t {
    Speaker = 0,
    Controller = 1,
    ControllerFallbackToSpeaker = 2,
    EAudioOutputTarget_MAX = 3,
};
#pragma pack(pop)
}
