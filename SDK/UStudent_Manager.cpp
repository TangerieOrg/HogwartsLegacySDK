#include "UNPC_Manager.hpp"
#include "UStudent_Manager.hpp"
UStudent_Manager* UStudent_Manager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Student_Manager");
    return (UStudent_Manager*)res;
}
