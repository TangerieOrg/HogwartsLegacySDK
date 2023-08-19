#pragma once
#include <cstdint>
#include "EEnvQueryRunMode\Type.hpp"
#include "UInterface.hpp"
struct FQueryFinishedData;
struct FSocialResponse;
#pragma pack(push, 1)
class USocialReasoning_Interface : public UInterface {
public:
    static USocialReasoning_Interface* StaticClass();
    void RunEQS_FindStations(EEnvQueryRunMode::Type RunMode, FQueryFinishedData& QueryFinishedDelegate);
    void RunEQS_FindSocialReasonings(EEnvQueryRunMode::Type RunMode, FQueryFinishedData& QueryFinishedDelegate);
    void PlayerSighted();
    bool Nevermind();
    bool Goodbye();
    void ExcuseMe();
    void ConverseWithProxy(FSocialResponse& SocialResponse);
    void Converse(FSocialResponse& SocialResponse);
}; // Size: 0x28
#pragma pack(pop)
