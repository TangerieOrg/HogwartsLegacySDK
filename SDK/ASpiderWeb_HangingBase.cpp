#include "ASpiderWeb_EggSack.hpp"
#include "ASpiderWeb_HangingBase.hpp"
#include "AWorldObject.hpp"
#include "ESpiderTypeEnum.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UParticleSystem.hpp"
#include "UPhysicsConstraintComponent.hpp"
#include "UPoseableMeshComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ASpiderWeb_HangingBase* ASpiderWeb_HangingBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpiderWeb_HangingBase");
    return (ASpiderWeb_HangingBase*)res;
}
void ASpiderWeb_HangingBase::EndWebRetract() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_HangingBase.EndWebRetract"));
    struct Params_EndWebRetract {
    }; // Size: 0x0
    Params_EndWebRetract params{};
    ProcessEvent(func, &params);
}
void ASpiderWeb_HangingBase::DescendoHit() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_HangingBase.DescendoHit"));
    struct Params_DescendoHit {
    }; // Size: 0x0
    Params_DescendoHit params{};
    ProcessEvent(func, &params);
}
void ASpiderWeb_HangingBase::WingardiumStart(bool i_Start) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_HangingBase.WingardiumStart"));
    struct Params_WingardiumStart {
        bool i_Start; // 0x0
    }; // Size: 0x1
    Params_WingardiumStart params{};
    params.i_Start = (bool)i_Start;
    ProcessEvent(func, &params);
}
void ASpiderWeb_HangingBase::WebRetract() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_HangingBase.WebRetract"));
    struct Params_WebRetract {
    }; // Size: 0x0
    Params_WebRetract params{};
    ProcessEvent(func, &params);
}
void ASpiderWeb_HangingBase::WakeTick(bool i_Wake) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_HangingBase.WakeTick"));
    struct Params_WakeTick {
        bool i_Wake; // 0x0
    }; // Size: 0x1
    Params_WakeTick params{};
    params.i_Wake = (bool)i_Wake;
    ProcessEvent(func, &params);
}
void ASpiderWeb_HangingBase::ScaleStart(bool i_Start, bool i_ScaleUp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_HangingBase.ScaleStart"));
    struct Params_ScaleStart {
        bool i_Start; // 0x0
        bool i_ScaleUp; // 0x1
    }; // Size: 0x2
    Params_ScaleStart params{};
    params.i_Start = (bool)i_Start;
    params.i_ScaleUp = (bool)i_ScaleUp;
    ProcessEvent(func, &params);
}
void ASpiderWeb_HangingBase::StartWebRetract() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_HangingBase.StartWebRetract"));
    struct Params_StartWebRetract {
    }; // Size: 0x0
    Params_StartWebRetract params{};
    ProcessEvent(func, &params);
}
void ASpiderWeb_HangingBase::BreakConnection(bool i_Explode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_HangingBase.BreakConnection"));
    struct Params_BreakConnection {
        bool i_Explode; // 0x0
    }; // Size: 0x1
    Params_BreakConnection params{};
    params.i_Explode = (bool)i_Explode;
    ProcessEvent(func, &params);
}
void ASpiderWeb_HangingBase::AccioStart(bool i_Start, float i_Time) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_HangingBase.AccioStart"));
    struct Params_AccioStart {
        bool i_Start; // 0x0
        char pad_1[0x3];
        float i_Time; // 0x4
    }; // Size: 0x8
    Params_AccioStart params{};
    params.i_Start = (bool)i_Start;
    params.i_Time = (float)i_Time;
    ProcessEvent(func, &params);
}
void ASpiderWeb_HangingBase::AccioPull() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_HangingBase.AccioPull"));
    struct Params_AccioPull {
    }; // Size: 0x0
    Params_AccioPull params{};
    ProcessEvent(func, &params);
}
