#pragma once
#include <cstdint>
#include "AStreamingPlaceholderBase.hpp"
#include "EStreamingPlaceholderPriority.hpp"
class UStreamingPreviewChildActorComponent;
#pragma pack(push, 1)
class AStreamingPlaceholderChildActorBase : public AStreamingPlaceholderBase {
public:
    EStreamingPlaceholderPriority StreamingPriority; // 0x260
    bool bAutoLoad; // 0x261
    bool bAutoSpawn; // 0x262
    char pad_263[0x5];
    UStreamingPreviewChildActorComponent* ChildActorComponent; // 0x268
    static AStreamingPlaceholderChildActorBase* StaticClass();
}; // Size: 0x270
#pragma pack(pop)
