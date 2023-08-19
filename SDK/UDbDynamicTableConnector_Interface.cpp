#include "UDbDynamicTableConnector_Interface.hpp"
#include "UInterface.hpp"
UDbDynamicTableConnector_Interface* UDbDynamicTableConnector_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/DbGateway.DbDynamicTableConnector_Interface");
    return (UDbDynamicTableConnector_Interface*)res;
}
