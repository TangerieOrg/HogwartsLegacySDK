#pragma once
#include <cstdint>
#include "UContentWidget.hpp"
#pragma pack(push, 1)
class UInvalidationBox : public UContentWidget {
public:
    bool bCanCache; // 0x120
    bool CacheRelativeTransforms; // 0x121
    char pad_122[0x16];
    static UInvalidationBox* StaticClass();
    void SetCanCache(bool CanCache);
    void InvalidateCache();
    bool GetCanCache();
}; // Size: 0x138
#pragma pack(pop)
