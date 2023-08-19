#include "UAIPerceptionStimuliSourceComponent.hpp"
#include "UActorComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
void UAIPerceptionStimuliSourceComponent::RegisterWithPerceptionSystem() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem"));
    struct Params_RegisterWithPerceptionSystem {
    }; // Size: 0x0
    Params_RegisterWithPerceptionSystem params{};
    ProcessEvent(func, &params);
}
UAIPerceptionStimuliSourceComponent* UAIPerceptionStimuliSourceComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AIPerceptionStimuliSourceComponent");
    return (UAIPerceptionStimuliSourceComponent*)res;
}
void UAIPerceptionStimuliSourceComponent::UnregisterFromSense(UClass* SenseClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense"));
    struct Params_UnregisterFromSense {
        UClass* SenseClass; // 0x0
    }; // Size: 0x8
    Params_UnregisterFromSense params{};
    params.SenseClass = (UClass*)SenseClass;
    ProcessEvent(func, &params);
}
void UAIPerceptionStimuliSourceComponent::UnregisterFromPerceptionSystem() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem"));
    struct Params_UnregisterFromPerceptionSystem {
    }; // Size: 0x0
    Params_UnregisterFromPerceptionSystem params{};
    ProcessEvent(func, &params);
}
void UAIPerceptionStimuliSourceComponent::RegisterForSense(UClass* SenseClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense"));
    struct Params_RegisterForSense {
        UClass* SenseClass; // 0x0
    }; // Size: 0x8
    Params_RegisterForSense params{};
    params.SenseClass = (UClass*)SenseClass;
    ProcessEvent(func, &params);
}
