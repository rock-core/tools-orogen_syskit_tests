/* Generated from orogen/lib/orogen/templates/tasks/Task.cpp */

#include "LogicalTimeLoggingTest.hpp"

using namespace orogen_syskit_tests;

LogicalTimeLoggingTest::LogicalTimeLoggingTest(std::string const& name)
    : LogicalTimeLoggingTestBase(name)
{
}

LogicalTimeLoggingTest::~LogicalTimeLoggingTest()
{
}

/// The following lines are template definitions for the various state machine
// hooks defined by Orocos::RTT. See LogicalTimeLoggingTest.hpp for more detailed
// documentation about them.

bool LogicalTimeLoggingTest::configureHook()
{
    if (!LogicalTimeLoggingTestBase::configureHook())
        return false;

    m_test_type_timestamp = _test_type_timestamp.get();
    return true;
}
bool LogicalTimeLoggingTest::startHook()
{
    if (!LogicalTimeLoggingTestBase::startHook())
        return false;
    return true;
}
void LogicalTimeLoggingTest::updateHook()
{
    LogicalTimeLoggingTestBase::updateHook();

    TestType test_type;
    test_type.timestamp = m_test_type_timestamp;
    _out.write(test_type);
}
void LogicalTimeLoggingTest::errorHook()
{
    LogicalTimeLoggingTestBase::errorHook();
}
void LogicalTimeLoggingTest::stopHook()
{
    LogicalTimeLoggingTestBase::stopHook();
}
void LogicalTimeLoggingTest::cleanupHook()
{
    LogicalTimeLoggingTestBase::cleanupHook();
}
