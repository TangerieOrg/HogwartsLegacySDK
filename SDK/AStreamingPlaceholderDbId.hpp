#pragma once
#include <cstdint>
#include "AStreamingPlaceholderChildActorBase.hpp"
#include "FSpawnSelectInfo.hpp"
#pragma pack(push, 1)
class AStreamingPlaceholderDbId : public AStreamingPlaceholderChildActorBase {
public:
    FSpawnSelectInfo DbIdInfo; // 0x270
    static AStreamingPlaceholderDbId* StaticClass();
}; // Size: 0x2f0
#pragma pack(pop)
