#include "net_type_info.h"
#include <QDebug>

NetTypeInfo::NetTypeInfo(std::string fullTypeName) :
    prefVariantType(NetVariantTypeEnum_Invalid),
    fullTypeName(fullTypeName),
    metaObject(NULL)
{

}

NetTypeInfo::~NetTypeInfo()
{

}

NetVariantTypeEnum NetTypeInfo::GetPrefVariantType()
{
    return prefVariantType;
}

void NetTypeInfo::SetPrefVariantType(NetVariantTypeEnum value)
{
    prefVariantType = value;
}

std::string NetTypeInfo::GetFullTypeName()
{
    return fullTypeName;
}

void NetTypeInfo::SetClassName(std::string className)
{
    this->className = className;
}

std::string NetTypeInfo::GetClassName()
{
    return className;
}

void NetTypeInfo::AddMethod(NetMethodInfo* methodInfo)
{
    methods.append(methodInfo);
}

int NetTypeInfo::GetMethodCount()
{
    return methods.length();
}

NetMethodInfo* NetTypeInfo::GetMethod(int index)
{
    if(index < 0) return NULL;
    if(index >= methods.length()) return NULL;

    return methods.at(index);
}

void NetTypeInfo::AddProperty(NetPropertyInfo* propertyInfo)
{
    properties.append(propertyInfo);
}

int NetTypeInfo::GetPropertyCount()
{
    return properties.length();
}

NetPropertyInfo* NetTypeInfo::GetProperty(int index)
{
    if(index < 0) return NULL;
    if(index >= properties.length()) return NULL;

    return properties.at(index);
}

void NetTypeInfo::AddEvent(NetEventInfo* eventInfo) {
    events.append(eventInfo);
}

int NetTypeInfo::GetEventCount() {
    return events.size();
}

NetEventInfo* NetTypeInfo::GetEvent(int index) {
    if(index < 0) return NULL;
    if(index >= events.length()) return NULL;

    return events.at(index);
}
