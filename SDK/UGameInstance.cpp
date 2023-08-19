#include "ENetworkFailure\Type.hpp"
#include "ETravelFailure\Type.hpp"
#include "UFunction.hpp"
#include "UGameInstance.hpp"
#include "ULocalPlayer.hpp"
#include "UObject.hpp"
#include "UOnlineSession.hpp"
void UGameInstance::HandleTravelError(ETravelFailure::Type FailureType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameInstance.HandleTravelError"));
    struct Params_HandleTravelError {
        ETravelFailure::Type FailureType; // 0x0
    }; // Size: 0x1
    Params_HandleTravelError params{};
    params.FailureType = (ETravelFailure::Type)FailureType;
    ProcessEvent(func, &params);
}
UGameInstance* UGameInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.GameInstance");
    return (UGameInstance*)res;
}
void UGameInstance::DebugRemovePlayer(int32_t ControllerId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameInstance.DebugRemovePlayer"));
    struct Params_DebugRemovePlayer {
        int32_t ControllerId; // 0x0
    }; // Size: 0x4
    Params_DebugRemovePlayer params{};
    params.ControllerId = (int32_t)ControllerId;
    ProcessEvent(func, &params);
}
void UGameInstance::HandleNetworkError(ENetworkFailure::Type FailureType, bool bIsServer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameInstance.HandleNetworkError"));
    struct Params_HandleNetworkError {
        ENetworkFailure::Type FailureType; // 0x0
        bool bIsServer; // 0x1
    }; // Size: 0x2
    Params_HandleNetworkError params{};
    params.FailureType = (ENetworkFailure::Type)FailureType;
    params.bIsServer = (bool)bIsServer;
    ProcessEvent(func, &params);
}
void UGameInstance::ReceiveShutdown() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameInstance.ReceiveShutdown"));
    struct Params_ReceiveShutdown {
    }; // Size: 0x0
    Params_ReceiveShutdown params{};
    ProcessEvent(func, &params);
}
void UGameInstance::ReceiveInit() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameInstance.ReceiveInit"));
    struct Params_ReceiveInit {
    }; // Size: 0x0
    Params_ReceiveInit params{};
    ProcessEvent(func, &params);
}
void UGameInstance::DebugCreatePlayer(int32_t ControllerId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameInstance.DebugCreatePlayer"));
    struct Params_DebugCreatePlayer {
        int32_t ControllerId; // 0x0
    }; // Size: 0x4
    Params_DebugCreatePlayer params{};
    params.ControllerId = (int32_t)ControllerId;
    ProcessEvent(func, &params);
}
