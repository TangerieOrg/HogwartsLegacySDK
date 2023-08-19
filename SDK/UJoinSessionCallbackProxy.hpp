#pragma once
#include <cstdint>
#include "UOnlineBlueprintCallProxyBase.hpp"
class UObject;
class APlayerController;
struct FBlueprintSessionResult;
#pragma pack(push, 1)
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:
    char pad_30[0x150];
    static UJoinSessionCallbackProxy* StaticClass();
    static UJoinSessionCallbackProxy* JoinSession(UObject* WorldContextObject, APlayerController* PlayerController, FBlueprintSessionResult& SearchResult);
}; // Size: 0x180
#pragma pack(pop)
