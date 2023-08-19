#include "EEnvQueryRunMode\Type.hpp"
#include "FQueryFinishedData.hpp"
#include "FSocialResponse.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "USocialReasoning_Interface.hpp"
void USocialReasoning_Interface::ConverseWithProxy(FSocialResponse& SocialResponse) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning_Interface.ConverseWithProxy"));
    struct Params_ConverseWithProxy {
        FSocialResponse SocialResponse; // 0x0
    }; // Size: 0x38
    Params_ConverseWithProxy params{};
    params.SocialResponse = (FSocialResponse)SocialResponse;
    ProcessEvent(func, &params);
    SocialResponse = params.SocialResponse;
}
USocialReasoning_Interface* USocialReasoning_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SocialReasoning_Interface");
    return (USocialReasoning_Interface*)res;
}
void USocialReasoning_Interface::ExcuseMe() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning_Interface.ExcuseMe"));
    struct Params_ExcuseMe {
    }; // Size: 0x0
    Params_ExcuseMe params{};
    ProcessEvent(func, &params);
}
void USocialReasoning_Interface::RunEQS_FindStations(EEnvQueryRunMode::Type RunMode, FQueryFinishedData& QueryFinishedDelegate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning_Interface.RunEQS_FindStations"));
    struct Params_RunEQS_FindStations {
        EEnvQueryRunMode::Type RunMode; // 0x0
        char pad_1[0x7];
        FQueryFinishedData QueryFinishedDelegate; // 0x8
    }; // Size: 0x18
    Params_RunEQS_FindStations params{};
    params.RunMode = (EEnvQueryRunMode::Type)RunMode;
    params.QueryFinishedDelegate = (FQueryFinishedData)QueryFinishedDelegate;
    ProcessEvent(func, &params);
    QueryFinishedDelegate = params.QueryFinishedDelegate;
}
void USocialReasoning_Interface::RunEQS_FindSocialReasonings(EEnvQueryRunMode::Type RunMode, FQueryFinishedData& QueryFinishedDelegate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning_Interface.RunEQS_FindSocialReasonings"));
    struct Params_RunEQS_FindSocialReasonings {
        EEnvQueryRunMode::Type RunMode; // 0x0
        char pad_1[0x7];
        FQueryFinishedData QueryFinishedDelegate; // 0x8
    }; // Size: 0x18
    Params_RunEQS_FindSocialReasonings params{};
    params.RunMode = (EEnvQueryRunMode::Type)RunMode;
    params.QueryFinishedDelegate = (FQueryFinishedData)QueryFinishedDelegate;
    ProcessEvent(func, &params);
    QueryFinishedDelegate = params.QueryFinishedDelegate;
}
bool USocialReasoning_Interface::Nevermind() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning_Interface.Nevermind"));
    struct Params_Nevermind {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_Nevermind params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USocialReasoning_Interface::PlayerSighted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning_Interface.PlayerSighted"));
    struct Params_PlayerSighted {
    }; // Size: 0x0
    Params_PlayerSighted params{};
    ProcessEvent(func, &params);
}
bool USocialReasoning_Interface::Goodbye() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning_Interface.Goodbye"));
    struct Params_Goodbye {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_Goodbye params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USocialReasoning_Interface::Converse(FSocialResponse& SocialResponse) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning_Interface.Converse"));
    struct Params_Converse {
        FSocialResponse SocialResponse; // 0x0
    }; // Size: 0x38
    Params_Converse params{};
    params.SocialResponse = (FSocialResponse)SocialResponse;
    ProcessEvent(func, &params);
    SocialResponse = params.SocialResponse;
}
