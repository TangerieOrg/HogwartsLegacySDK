#include "UExecuteTask.hpp"
#include "UObject.hpp"
UExecuteTask* UExecuteTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ExecuteTask");
    return (UExecuteTask*)res;
}
