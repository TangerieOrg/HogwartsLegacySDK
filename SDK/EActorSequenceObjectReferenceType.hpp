#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EActorSequenceObjectReferenceType : uint8_t {
    ContextActor = 0,
    ExternalActor = 1,
    Component = 2,
    EActorSequenceObjectReferenceType_MAX = 3,
};
#pragma pack(pop)
