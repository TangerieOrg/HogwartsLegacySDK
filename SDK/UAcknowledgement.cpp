#include "UAcknowledgement.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAcknowledgement* UAcknowledgement::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Acknowledgement");
    return (UAcknowledgement*)res;
}
void UAcknowledgement::EventExecute(bool bNewResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Acknowledgement.EventExecute"));
    struct Params_EventExecute {
        bool bNewResult; // 0x0
    }; // Size: 0x1
    Params_EventExecute params{};
    params.bNewResult = (bool)bNewResult;
    ProcessEvent(func, &params);
}
