#include "AActor.hpp"
#include "AEditorAwareActor.hpp"
#include "UFunction.hpp"
AEditorAwareActor* AEditorAwareActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EditorAwareActor");
    return (AEditorAwareActor*)res;
}
void AEditorAwareActor::PostEditorChangeProperty(FName& PropertyName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EditorAwareActor.PostEditorChangeProperty"));
    struct Params_PostEditorChangeProperty {
        FName PropertyName; // 0x0
    }; // Size: 0x8
    Params_PostEditorChangeProperty params{};
    params.PropertyName = (FName)PropertyName;
    ProcessEvent(func, &params);
    PropertyName = params.PropertyName;
}
void AEditorAwareActor::PreEditorChangeProperty(FName& PropertyName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EditorAwareActor.PreEditorChangeProperty"));
    struct Params_PreEditorChangeProperty {
        FName PropertyName; // 0x0
    }; // Size: 0x8
    Params_PreEditorChangeProperty params{};
    params.PropertyName = (FName)PropertyName;
    ProcessEvent(func, &params);
    PropertyName = params.PropertyName;
}
void AEditorAwareActor::PostEditorMove(bool bFinished) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EditorAwareActor.PostEditorMove"));
    struct Params_PostEditorMove {
        bool bFinished; // 0x0
    }; // Size: 0x1
    Params_PostEditorMove params{};
    params.bFinished = (bool)bFinished;
    ProcessEvent(func, &params);
}
void AEditorAwareActor::EditorTick(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EditorAwareActor.EditorTick"));
    struct Params_EditorTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_EditorTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
