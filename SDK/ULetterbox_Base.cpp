#include "UFunction.hpp"
#include "ULetterbox_Base.hpp"
#include "UUserWidget.hpp"
ULetterbox_Base* ULetterbox_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Letterbox_Base");
    return (ULetterbox_Base*)res;
}
void ULetterbox_Base::ShowLetterbox(bool Show) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Letterbox_Base.ShowLetterbox"));
    struct Params_ShowLetterbox {
        bool Show; // 0x0
    }; // Size: 0x1
    Params_ShowLetterbox params{};
    params.Show = (bool)Show;
    ProcessEvent(func, &params);
}
void ULetterbox_Base::OnShowLetterbox(bool Show) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Letterbox_Base.OnShowLetterbox"));
    struct Params_OnShowLetterbox {
        bool Show; // 0x0
    }; // Size: 0x1
    Params_OnShowLetterbox params{};
    params.Show = (bool)Show;
    ProcessEvent(func, &params);
}
