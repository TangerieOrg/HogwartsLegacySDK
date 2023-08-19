#pragma once
#include <cstdint>
#include "AStreamingPlaceholderChildActorBase.hpp"
#include "ESanctuaryIdentity.hpp"
#pragma pack(push, 1)
class AStreamingPlaceholderSanctuaryIdentity : public AStreamingPlaceholderChildActorBase {
public:
    char pad_270[0x78];
    bool bAutoSwapWhenIdentityChanges; // 0x2e8
    char pad_2e9[0x7];
    static AStreamingPlaceholderSanctuaryIdentity* StaticClass();
    void OnIdentityChanged(ESanctuaryIdentity OldIdentity, ESanctuaryIdentity NewIdentity);
}; // Size: 0x2f0
#pragma pack(pop)
