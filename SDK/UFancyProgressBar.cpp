#include "UFancyProgressBar.hpp"
#include "UFunction.hpp"
#include "UPhoenixUserWidget.hpp"
void UFancyProgressBar::FilledFeedback() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FancyProgressBar.FilledFeedback"));
    struct Params_FilledFeedback {
    }; // Size: 0x0
    Params_FilledFeedback params{};
    ProcessEvent(func, &params);
}
UFancyProgressBar* UFancyProgressBar::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FancyProgressBar");
    return (UFancyProgressBar*)res;
}
void UFancyProgressBar::ProgressChanged(float Progress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FancyProgressBar.ProgressChanged"));
    struct Params_ProgressChanged {
        float Progress; // 0x0
    }; // Size: 0x4
    Params_ProgressChanged params{};
    params.Progress = (float)Progress;
    ProcessEvent(func, &params);
}
void UFancyProgressBar::SetProgress(float Progress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FancyProgressBar.SetProgress"));
    struct Params_SetProgress {
        float Progress; // 0x0
    }; // Size: 0x4
    Params_SetProgress params{};
    params.Progress = (float)Progress;
    ProcessEvent(func, &params);
}
void UFancyProgressBar::DepletedFeedback() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FancyProgressBar.DepletedFeedback"));
    struct Params_DepletedFeedback {
    }; // Size: 0x0
    Params_DepletedFeedback params{};
    ProcessEvent(func, &params);
}
void UFancyProgressBar::ResetProgress(float Progress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FancyProgressBar.ResetProgress"));
    struct Params_ResetProgress {
        float Progress; // 0x0
    }; // Size: 0x4
    Params_ResetProgress params{};
    params.Progress = (float)Progress;
    ProcessEvent(func, &params);
}
void UFancyProgressBar::SetGhostProgress(float GhostProgress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FancyProgressBar.SetGhostProgress"));
    struct Params_SetGhostProgress {
        float GhostProgress; // 0x0
    }; // Size: 0x4
    Params_SetGhostProgress params{};
    params.GhostProgress = (float)GhostProgress;
    ProcessEvent(func, &params);
}
void UFancyProgressBar::GhostProgressChanged(float GhostProgress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FancyProgressBar.GhostProgressChanged"));
    struct Params_GhostProgressChanged {
        float GhostProgress; // 0x0
    }; // Size: 0x4
    Params_GhostProgressChanged params{};
    params.GhostProgress = (float)GhostProgress;
    ProcessEvent(func, &params);
}
