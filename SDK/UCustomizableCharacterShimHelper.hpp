#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UCustomizableCharacterShimHelper : public UObject {
public:
    static UCustomizableCharacterShimHelper* StaticClass();
    static bool SetCharacterLookOverride(FName CharacterID, FName CharacterIdOverride);
    static bool RemoveCharacterLookOverride(FName CharacterID);
    static FName GetCharacterLookOverride(FName CharacterID);
}; // Size: 0x28
#pragma pack(pop)
