#include "AActor.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UInsideOutside.hpp"
#include "UObject.hpp"
bool UInsideOutside::ActorInsideExactCached(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.InsideOutside.ActorInsideExactCached"));
    struct Params_ActorInsideExactCached {
        AActor* Actor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_ActorInsideExactCached params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UInsideOutside* UInsideOutside::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.InsideOutside");
    return (UInsideOutside*)res;
}
bool UInsideOutside::PositionOutside(UObject* WorldContextObject, FVector Position, bool bExact) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.InsideOutside.PositionOutside"));
    struct Params_PositionOutside {
        UObject* WorldContextObject; // 0x0
        FVector Position; // 0x8
        bool bExact; // 0x14
        bool ReturnValue; // 0x15
    }; // Size: 0x16
    Params_PositionOutside params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Position = (FVector)Position;
    params.bExact = (bool)bExact;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UInsideOutside::ActorOutsideCoarseCached(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.InsideOutside.ActorOutsideCoarseCached"));
    struct Params_ActorOutsideCoarseCached {
        AActor* Actor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_ActorOutsideCoarseCached params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UInsideOutside::PositionInside(UObject* WorldContextObject, FVector Position, bool bExact) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.InsideOutside.PositionInside"));
    struct Params_PositionInside {
        UObject* WorldContextObject; // 0x0
        FVector Position; // 0x8
        bool bExact; // 0x14
        bool ReturnValue; // 0x15
    }; // Size: 0x16
    Params_PositionInside params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Position = (FVector)Position;
    params.bExact = (bool)bExact;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UInsideOutside::ActorOutsideExactCached(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.InsideOutside.ActorOutsideExactCached"));
    struct Params_ActorOutsideExactCached {
        AActor* Actor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_ActorOutsideExactCached params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UInsideOutside::ActorInsideCoarseCached(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.InsideOutside.ActorInsideCoarseCached"));
    struct Params_ActorInsideCoarseCached {
        AActor* Actor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_ActorInsideCoarseCached params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UInsideOutside::ActorOutsideCached(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.InsideOutside.ActorOutsideCached"));
    struct Params_ActorOutsideCached {
        AActor* Actor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_ActorOutsideCached params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UInsideOutside::ActorInsideCached(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.InsideOutside.ActorInsideCached"));
    struct Params_ActorInsideCached {
        AActor* Actor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_ActorInsideCached params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
