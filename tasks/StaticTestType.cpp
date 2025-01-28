/* Generated from orogen/lib/orogen/templates/tasks/Task.cpp */

#include "StaticTestType.hpp"

using namespace orogen_syskit_tests;

StaticTestType::StaticTestType(std::string const& name)
    : StaticTestTypeBase(name)
{
}

StaticTestType::~StaticTestType()
{
}

/// The following lines are template definitions for the various state machine
// hooks defined by Orocos::RTT. See StaticTestType.hpp for more detailed
// documentation about them.

bool StaticTestType::configureHook()
{
    if (!StaticTestTypeBase::configureHook())
        return false;

    m_test_type_value = _test_value.get();
    return true;
}
bool StaticTestType::startHook()
{
    if (!StaticTestTypeBase::startHook())
        return false;
    return true;
}
void StaticTestType::updateHook()
{
    StaticTestTypeBase::updateHook();

    TestType test_type;
    test_type.test_value = m_test_type_value;
    _out.write(test_type);
}
void StaticTestType::errorHook()
{
    StaticTestTypeBase::errorHook();
}
void StaticTestType::stopHook()
{
    StaticTestTypeBase::stopHook();
}
void StaticTestType::cleanupHook()
{
    StaticTestTypeBase::cleanupHook();
}
