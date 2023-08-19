#pragma once
#include <cstdint>
#include "EARServiceAvailability.hpp"
#include "EARServiceInstallRequestResult.hpp"
#include "EARServicePermissionRequestResult.hpp"
#include "FLatentActionInfo.hpp"
#include "UObject.hpp"
class UARSessionConfig;
#pragma pack(push, 1)
class UARDependencyHandler : public UObject {
public:
    static UARDependencyHandler* StaticClass();
    void StartARSessionLatent(UObject* WorldContextObject, UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo);
    void RequestARSessionPermission(UObject* WorldContextObject, UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo, EARServicePermissionRequestResult& OutPermissionResult);
    void InstallARService(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceInstallRequestResult& OutInstallResult);
    static UARDependencyHandler* GetARDependencyHandler();
    void CheckARServiceAvailability(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceAvailability& OutAvailability);
}; // Size: 0x28
#pragma pack(pop)
