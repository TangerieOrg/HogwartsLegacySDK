#pragma once
#include <cstdint>
#include "AStreamingPlaceholderChildActorBase.hpp"
#pragma pack(push, 1)
class AStreamingPlaceholderActor : public AStreamingPlaceholderChildActorBase {
public:
    char pad_270[0x28];
    static AStreamingPlaceholderActor* StaticClass();
}; // Size: 0x298
#pragma pack(pop)
