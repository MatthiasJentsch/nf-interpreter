//
// Copyright (c) 2017 The nanoFramework project contributors
// See LICENSE file in the project root for full license information.
//
#include "CorLib.h"


static const CLR_RT_MethodHandler method_lookup[] =
{
    NULL,
    Library_corlib_native_System_Object::Equals___BOOLEAN__OBJECT,
    Library_corlib_native_System_Object::GetHashCode___I4,
    NULL,
    Library_corlib_native_System_Object::GetType___SystemType,
    Library_corlib_native_System_Object::MemberwiseClone___OBJECT,
    NULL,
    Library_corlib_native_System_Object::ReferenceEquals___STATIC__BOOLEAN__OBJECT__OBJECT,
    NULL,
    Library_corlib_native_System_ValueType::Equals___BOOLEAN__OBJECT,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Exception::get_StackTrace___STRING,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_AppDomain::GetAssemblies___SZARRAY_SystemReflectionAssembly,
    Library_corlib_native_System_AppDomain::LoadInternal___SystemReflectionAssembly__STRING__BOOLEAN__I4__I4__I4__I4,
    Library_corlib_native_System_AppDomain::CreateDomain___STATIC__SystemAppDomain__STRING,
    NULL,
    Library_corlib_native_System_AppDomain::Unload___STATIC__VOID__SystemAppDomain,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Array::System_Collections_IList_get_Item___OBJECT__I4,
    Library_corlib_native_System_Array::System_Collections_IList_set_Item___VOID__I4__OBJECT,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Array::get_Length___I4,
    NULL,
    Library_corlib_native_System_Array::CreateInstance___STATIC__SystemArray__SystemType__I4,
    NULL,
    Library_corlib_native_System_Array::Copy___STATIC__VOID__SystemArray__I4__SystemArray__I4__I4,
    Library_corlib_native_System_Array::Clear___STATIC__VOID__SystemArray__I4__I4,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Array::TrySzIndexOf___STATIC__BOOLEAN__SystemArray__I4__I4__OBJECT__BYREF_I4,
    Library_corlib_native_System_Delegate::Equals___BOOLEAN__OBJECT,
    Library_corlib_native_System_Delegate::get_Method___SystemReflectionMethodInfo,
    Library_corlib_native_System_Delegate::get_Target___OBJECT,
    NULL,
    Library_corlib_native_System_Delegate::Combine___STATIC__SystemDelegate__SystemDelegate__SystemDelegate,
    Library_corlib_native_System_Delegate::Remove___STATIC__SystemDelegate__SystemDelegate__SystemDelegate,
    Library_corlib_native_System_Delegate::op_Equality___STATIC__BOOLEAN__SystemDelegate__SystemDelegate,
    Library_corlib_native_System_Delegate::op_Inequality___STATIC__BOOLEAN__SystemDelegate__SystemDelegate,
    NULL,
    NULL,
    Library_corlib_native_System_MulticastDelegate::op_Equality___STATIC__BOOLEAN__SystemMulticastDelegate__SystemMulticastDelegate,
    Library_corlib_native_System_MulticastDelegate::op_Inequality___STATIC__BOOLEAN__SystemMulticastDelegate__SystemMulticastDelegate,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_BitConverter::get_IsLittleEndian___STATIC__BOOLEAN,
    Library_corlib_native_System_BitConverter::DoubleToInt64Bits___STATIC__I8__R8,
    Library_corlib_native_System_BitConverter::GetBytes___STATIC__SZARRAY_U1__BOOLEAN,
    Library_corlib_native_System_BitConverter::GetBytes___STATIC__SZARRAY_U1__CHAR,
    Library_corlib_native_System_BitConverter::GetBytes___STATIC__SZARRAY_U1__R8,
    Library_corlib_native_System_BitConverter::GetBytes___STATIC__SZARRAY_U1__R4,
    Library_corlib_native_System_BitConverter::GetBytes___STATIC__SZARRAY_U1__I4,
    Library_corlib_native_System_BitConverter::GetBytes___STATIC__SZARRAY_U1__I8,
    Library_corlib_native_System_BitConverter::GetBytes___STATIC__SZARRAY_U1__I2,
    Library_corlib_native_System_BitConverter::GetBytes___STATIC__SZARRAY_U1__U4,
    Library_corlib_native_System_BitConverter::GetBytes___STATIC__SZARRAY_U1__U8,
    Library_corlib_native_System_BitConverter::GetBytes___STATIC__SZARRAY_U1__U2,
    Library_corlib_native_System_BitConverter::Int64BitsToDouble___STATIC__R8__I8,
    Library_corlib_native_System_BitConverter::ToBoolean___STATIC__BOOLEAN__SZARRAY_U1__I4,
    Library_corlib_native_System_BitConverter::ToChar___STATIC__CHAR__SZARRAY_U1__I4,
    Library_corlib_native_System_BitConverter::ToDouble___STATIC__R8__SZARRAY_U1__I4,
    Library_corlib_native_System_BitConverter::ToInt16___STATIC__I2__SZARRAY_U1__I4,
    Library_corlib_native_System_BitConverter::ToInt32___STATIC__I4__SZARRAY_U1__I4,
    Library_corlib_native_System_BitConverter::ToInt64___STATIC__I8__SZARRAY_U1__I4,
    Library_corlib_native_System_BitConverter::ToSingle___STATIC__R4__SZARRAY_U1__I4,
    Library_corlib_native_System_BitConverter::ToString___STATIC__STRING__SZARRAY_U1,
    Library_corlib_native_System_BitConverter::ToString___STATIC__STRING__SZARRAY_U1__I4,
    Library_corlib_native_System_BitConverter::ToString___STATIC__STRING__SZARRAY_U1__I4__I4,
    Library_corlib_native_System_BitConverter::ToUInt16___STATIC__U2__SZARRAY_U1__I4,
    Library_corlib_native_System_BitConverter::ToUInt32___STATIC__U4__SZARRAY_U1__I4,
    Library_corlib_native_System_BitConverter::ToUInt64___STATIC__U8__SZARRAY_U1__I4,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Collections_ArrayList::get_Item___OBJECT__I4,
    Library_corlib_native_System_Collections_ArrayList::set_Item___VOID__I4__OBJECT,
    Library_corlib_native_System_Collections_ArrayList::Add___I4__OBJECT,
    NULL,
    Library_corlib_native_System_Collections_ArrayList::Clear___VOID,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Collections_ArrayList::Insert___VOID__I4__OBJECT,
    NULL,
    Library_corlib_native_System_Collections_ArrayList::RemoveAt___VOID__I4,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Collections_ArrayList::SetCapacity___VOID__I4,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Collections_Queue::Clear___VOID,
    Library_corlib_native_System_Collections_Queue::CopyTo___VOID__SystemArray__I4,
    Library_corlib_native_System_Collections_Queue::Enqueue___VOID__OBJECT,
    NULL,
    Library_corlib_native_System_Collections_Queue::Dequeue___OBJECT,
    Library_corlib_native_System_Collections_Queue::Peek___OBJECT,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Collections_Stack::Clear___VOID,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Collections_Stack::Peek___OBJECT,
    Library_corlib_native_System_Collections_Stack::Pop___OBJECT,
    Library_corlib_native_System_Collections_Stack::Push___VOID__OBJECT,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Console::OutNative___STATIC__VOID__STRING__BOOLEAN,
    NULL,
    NULL,
    Library_corlib_native_System_Convert::NativeToInt64___STATIC__I8__STRING__BOOLEAN__I8__I8__I4,
    Library_corlib_native_System_Convert::NativeToDouble___STATIC__R8__STRING,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Convert::ToBase64String___STATIC__STRING__SZARRAY_U1__I4__I4__BOOLEAN,
    NULL,
    NULL,
    Library_corlib_native_System_Convert::FromBase64CharArray___STATIC__SZARRAY_U1__SZARRAY_CHAR__I4,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_DateTime::_ctor___VOID__I4__I4__I4__I4__I4__I4__I4,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_DateTime::get_Day___I4,
    Library_corlib_native_System_DateTime::get_DayOfWeek___SystemDayOfWeek,
    Library_corlib_native_System_DateTime::get_DayOfYear___I4,
    Library_corlib_native_System_DateTime::get_Hour___I4,
    NULL,
    Library_corlib_native_System_DateTime::get_Millisecond___I4,
    Library_corlib_native_System_DateTime::get_Minute___I4,
    Library_corlib_native_System_DateTime::get_Month___I4,
    Library_corlib_native_System_DateTime::get_Second___I4,
    NULL,
    NULL,
    Library_corlib_native_System_DateTime::get_Year___I4,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_DateTime::DaysInMonth___STATIC__I4__I4__I4,
    NULL,
    Library_corlib_native_System_DateTime::get_UtcNow___STATIC__SystemDateTime,
    Library_corlib_native_System_DateTime::get_Today___STATIC__SystemDateTime,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Diagnostics_Debugger::get_IsAttached___STATIC__BOOLEAN,
    Library_corlib_native_System_Diagnostics_Debugger::Break___STATIC__VOID,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Double::CompareTo___STATIC__I4__R8__R8,
    Library_corlib_native_System_Double::IsInfinity___STATIC__BOOLEAN__R8,
    Library_corlib_native_System_Double::IsNaN___STATIC__BOOLEAN__R8,
    Library_corlib_native_System_Double::IsNegativeInfinity___STATIC__BOOLEAN__R8,
    Library_corlib_native_System_Double::IsPositiveInfinity___STATIC__BOOLEAN__R8,
    NULL,
    NULL,
    Library_corlib_native_System_GC::AnyPendingFinalizers___STATIC__BOOLEAN,
    NULL,
    Library_corlib_native_System_GC::SuppressFinalize___STATIC__VOID__OBJECT,
    Library_corlib_native_System_GC::ReRegisterForFinalize___STATIC__VOID__OBJECT,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Globalization_CultureInfo::get_CurrentUICultureInternal___STATIC__SystemGlobalizationCultureInfo,
    Library_corlib_native_System_Globalization_CultureInfo::set_CurrentUICultureInternal___STATIC__VOID__SystemGlobalizationCultureInfo,
    Library_corlib_native_System_Globalization_DateTimeFormat::FormatDigits___STATIC__STRING__I4__I4,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Guid::GenerateNewGuid___STATIC__SZARRAY_U1,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Math::Abs___STATIC__I4__I4,
    Library_corlib_native_System_Math::Max___STATIC__I4__I4__I4,
    Library_corlib_native_System_Math::Min___STATIC__I4__I4__I4,
    Library_corlib_native_System_Math::Abs___STATIC__R8__R8,
    Library_corlib_native_System_Math::Abs___STATIC__R4__R4,
    Library_corlib_native_System_Math::Acos___STATIC__R8__R8,
    Library_corlib_native_System_Math::Acos___STATIC__R4__R4,
    Library_corlib_native_System_Math::Asin___STATIC__R8__R8,
    Library_corlib_native_System_Math::Asin___STATIC__R4__R4,
    Library_corlib_native_System_Math::Atan___STATIC__R8__R8,
    Library_corlib_native_System_Math::Atan___STATIC__R4__R4,
    Library_corlib_native_System_Math::Atan2___STATIC__R8__R8__R8,
    Library_corlib_native_System_Math::Atan2___STATIC__R4__R4__R4,
    Library_corlib_native_System_Math::Ceiling___STATIC__R8__R8,
    Library_corlib_native_System_Math::Ceiling___STATIC__R4__R4,
    Library_corlib_native_System_Math::Cos___STATIC__R8__R8,
    Library_corlib_native_System_Math::Cos___STATIC__R4__R4,
    Library_corlib_native_System_Math::Cosh___STATIC__R8__R8,
    Library_corlib_native_System_Math::Cosh___STATIC__R4__R4,
    Library_corlib_native_System_Math::IEEERemainder___STATIC__R8__R8__R8,
    Library_corlib_native_System_Math::IEEERemainder___STATIC__R4__R4__R4,
    Library_corlib_native_System_Math::Exp___STATIC__R8__R8,
    Library_corlib_native_System_Math::Exp___STATIC__R4__R4,
    Library_corlib_native_System_Math::Floor___STATIC__R8__R8,
    Library_corlib_native_System_Math::Floor___STATIC__R4__R4,
    Library_corlib_native_System_Math::Log___STATIC__R8__R8,
    Library_corlib_native_System_Math::Log___STATIC__R4__R4,
    Library_corlib_native_System_Math::Log10___STATIC__R8__R8,
    Library_corlib_native_System_Math::Log10___STATIC__R4__R4,
    Library_corlib_native_System_Math::Max___STATIC__R8__R8__R8,
    Library_corlib_native_System_Math::Max___STATIC__R4__R4__R4,
    Library_corlib_native_System_Math::Min___STATIC__R8__R8__R8,
    Library_corlib_native_System_Math::Min___STATIC__R4__R4__R4,
    Library_corlib_native_System_Math::Pow___STATIC__R8__R8__R8,
    Library_corlib_native_System_Math::Pow___STATIC__R4__R4__R4,
    Library_corlib_native_System_Math::Round___STATIC__R8__R8,
    Library_corlib_native_System_Math::Round___STATIC__R4__R4,
    Library_corlib_native_System_Math::Sign___STATIC__I4__R8,
    Library_corlib_native_System_Math::Sign___STATIC__I4__R4,
    Library_corlib_native_System_Math::Sin___STATIC__R8__R8,
    Library_corlib_native_System_Math::Sin___STATIC__R4__R4,
    Library_corlib_native_System_Math::Sinh___STATIC__R8__R8,
    Library_corlib_native_System_Math::Sinh___STATIC__R4__R4,
    Library_corlib_native_System_Math::Sqrt___STATIC__R8__R8,
    Library_corlib_native_System_Math::Sqrt___STATIC__R4__R4,
    Library_corlib_native_System_Math::Tan___STATIC__R8__R8,
    Library_corlib_native_System_Math::Tan___STATIC__R4__R4,
    Library_corlib_native_System_Math::Tanh___STATIC__R8__R8,
    Library_corlib_native_System_Math::Tanh___STATIC__R4__R4,
    Library_corlib_native_System_Math::Truncate___STATIC__R8__R8,
    Library_corlib_native_System_Math::Truncate___STATIC__R4__R4,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Number::FormatNative___STATIC__STRING__OBJECT__CHAR__I4,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Random::Next___I4,
    Library_corlib_native_System_Random::Next___I4__I4,
    Library_corlib_native_System_Random::NextDouble___R8,
    Library_corlib_native_System_Random::NextBytes___VOID__SZARRAY_U1,
    Library_corlib_native_System_Random::_ctor___VOID,
    Library_corlib_native_System_Random::_ctor___VOID__I4,
    Library_corlib_native_System_Reflection_Assembly::get_FullName___STRING,
    Library_corlib_native_System_Reflection_Assembly::GetType___SystemType__STRING,
    NULL,
    Library_corlib_native_System_Reflection_Assembly::GetTypes___SZARRAY_SystemType,
    Library_corlib_native_System_Reflection_Assembly::GetVersion___VOID__BYREF_I4__BYREF_I4__BYREF_I4__BYREF_I4,
    NULL,
    NULL,
    Library_corlib_native_System_Reflection_Assembly::GetManifestResourceNames___SZARRAY_STRING,
    NULL,
    Library_corlib_native_System_Reflection_Assembly::GetExecutingAssembly___STATIC__SystemReflectionAssembly,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Reflection_Assembly::LoadInternal___STATIC__SystemReflectionAssembly__STRING__BOOLEAN__I4__I4__I4__I4,
    Library_corlib_native_System_Reflection_Assembly::Load___STATIC__SystemReflectionAssembly__SZARRAY_U1,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Reflection_MethodBase::get_Name___STRING,
    Library_corlib_native_System_Reflection_MethodBase::get_DeclaringType___SystemType,
    Library_corlib_native_System_Reflection_MethodBase::get_IsPublic___BOOLEAN,
    Library_corlib_native_System_Reflection_MethodBase::get_IsStatic___BOOLEAN,
    Library_corlib_native_System_Reflection_MethodBase::get_IsFinal___BOOLEAN,
    Library_corlib_native_System_Reflection_MethodBase::get_IsVirtual___BOOLEAN,
    Library_corlib_native_System_Reflection_MethodBase::get_IsAbstract___BOOLEAN,
    Library_corlib_native_System_Reflection_MethodBase::Invoke___OBJECT__OBJECT__SZARRAY_OBJECT,
    NULL,
    NULL,
    Library_corlib_native_System_Reflection_ConstructorInfo::Invoke___OBJECT__SZARRAY_OBJECT,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Reflection_FieldInfo::SetValue___VOID__OBJECT__OBJECT,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Reflection_PropertyInfo::GetValue___OBJECT__OBJECT__SZARRAY_OBJECT,
    Library_corlib_native_System_Reflection_PropertyInfo::SetValue___VOID__OBJECT__OBJECT__SZARRAY_OBJECT,
    NULL,
    NULL,
    Library_corlib_native_System_Reflection_RuntimeFieldInfo::get_Name___STRING,
    Library_corlib_native_System_Reflection_RuntimeFieldInfo::get_DeclaringType___SystemType,
    Library_corlib_native_System_Reflection_RuntimeFieldInfo::get_FieldType___SystemType,
    Library_corlib_native_System_Reflection_RuntimeFieldInfo::GetValue___OBJECT__OBJECT,
    NULL,
    Library_corlib_native_System_Reflection_RuntimeMethodInfo::get_ReturnType___SystemType,
    NULL,
    Library_corlib_native_System_Resources_ResourceManager::GetObjectInternal___OBJECT__I2,
    Library_corlib_native_System_Resources_ResourceManager::GetObjectInternal___OBJECT__I2__I4__I4,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Resources_ResourceManager::FindResource___STATIC__I4__STRING__SystemReflectionAssembly,
    Library_corlib_native_System_Resources_ResourceManager::GetObject___STATIC__OBJECT__SystemResourcesResourceManager__SystemEnum,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Runtime_CompilerServices_RuntimeHelpers::InitializeArray___STATIC__VOID__SystemArray__SystemRuntimeFieldHandle,
    Library_corlib_native_System_Runtime_CompilerServices_RuntimeHelpers::GetObjectValue___STATIC__OBJECT__OBJECT,
    Library_corlib_native_System_Runtime_CompilerServices_RuntimeHelpers::RunClassConstructor___STATIC__VOID__SystemRuntimeTypeHandle,
    Library_corlib_native_System_Runtime_CompilerServices_RuntimeHelpers::get_OffsetToStringData___STATIC__I4,
    Library_corlib_native_System_Runtime_Remoting_RemotingServices::IsTransparentProxy___STATIC__BOOLEAN__OBJECT,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Type::get_DeclaringType___SystemType,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Type::GetMethod___SystemReflectionMethodInfo__STRING__SystemReflectionBindingFlags,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Type::IsInstanceOfType___BOOLEAN__OBJECT,
    NULL,
    Library_corlib_native_System_Type::InvokeMember___OBJECT__STRING__SystemReflectionBindingFlags__SystemReflectionBinder__OBJECT__SZARRAY_OBJECT,
    Library_corlib_native_System_Type::GetConstructor___SystemReflectionConstructorInfo__SZARRAY_SystemType,
    Library_corlib_native_System_Type::GetMethod___SystemReflectionMethodInfo__STRING__SZARRAY_SystemType,
    Library_corlib_native_System_Type::GetMethod___SystemReflectionMethodInfo__STRING,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Type::get_IsNotPublic___BOOLEAN,
    Library_corlib_native_System_Type::get_IsPublic___BOOLEAN,
    Library_corlib_native_System_Type::get_IsClass___BOOLEAN,
    Library_corlib_native_System_Type::get_IsInterface___BOOLEAN,
    Library_corlib_native_System_Type::get_IsValueType___BOOLEAN,
    Library_corlib_native_System_Type::get_IsAbstract___BOOLEAN,
    Library_corlib_native_System_Type::get_IsEnum___BOOLEAN,
    Library_corlib_native_System_Type::get_IsSerializable___BOOLEAN,
    Library_corlib_native_System_Type::get_IsArray___BOOLEAN,
    NULL,
    NULL,
    Library_corlib_native_System_Type::GetTypeInternal___STATIC__SystemType__STRING__STRING__BOOLEAN__SZARRAY_I4,
    Library_corlib_native_System_Type::GetTypeFromHandle___STATIC__SystemType__SystemRuntimeTypeHandle,
    NULL,
    NULL,
    Library_corlib_native_System_RuntimeType::get_Assembly___SystemReflectionAssembly,
    Library_corlib_native_System_RuntimeType::get_Name___STRING,
    Library_corlib_native_System_RuntimeType::get_FullName___STRING,
    NULL,
    Library_corlib_native_System_RuntimeType::get_BaseType___SystemType,
    Library_corlib_native_System_RuntimeType::GetMethods___SZARRAY_SystemReflectionMethodInfo__SystemReflectionBindingFlags,
    Library_corlib_native_System_RuntimeType::GetField___SystemReflectionFieldInfo__STRING__SystemReflectionBindingFlags,
    Library_corlib_native_System_RuntimeType::GetFields___SZARRAY_SystemReflectionFieldInfo__SystemReflectionBindingFlags,
    Library_corlib_native_System_RuntimeType::GetInterfaces___SZARRAY_SystemType,
    Library_corlib_native_System_RuntimeType::GetElementType___SystemType,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_String::CompareTo___I4__OBJECT,
    NULL,
    Library_corlib_native_System_String::get_Chars___CHAR__I4,
    Library_corlib_native_System_String::ToCharArray___SZARRAY_CHAR,
    Library_corlib_native_System_String::ToCharArray___SZARRAY_CHAR__I4__I4,
    Library_corlib_native_System_String::get_Length___I4,
    Library_corlib_native_System_String::Split___SZARRAY_STRING__SZARRAY_CHAR,
    Library_corlib_native_System_String::Split___SZARRAY_STRING__SZARRAY_CHAR__I4,
    Library_corlib_native_System_String::Substring___STRING__I4,
    Library_corlib_native_System_String::Substring___STRING__I4__I4,
    Library_corlib_native_System_String::Trim___STRING__SZARRAY_CHAR,
    Library_corlib_native_System_String::TrimStart___STRING__SZARRAY_CHAR,
    Library_corlib_native_System_String::TrimEnd___STRING__SZARRAY_CHAR,
    Library_corlib_native_System_String::_ctor___VOID__SZARRAY_CHAR__I4__I4,
    Library_corlib_native_System_String::_ctor___VOID__SZARRAY_CHAR,
    Library_corlib_native_System_String::_ctor___VOID__CHAR__I4,
    Library_corlib_native_System_String::CompareTo___I4__STRING,
    Library_corlib_native_System_String::IndexOf___I4__CHAR,
    Library_corlib_native_System_String::IndexOf___I4__CHAR__I4,
    Library_corlib_native_System_String::IndexOf___I4__CHAR__I4__I4,
    Library_corlib_native_System_String::IndexOfAny___I4__SZARRAY_CHAR,
    Library_corlib_native_System_String::IndexOfAny___I4__SZARRAY_CHAR__I4,
    Library_corlib_native_System_String::IndexOfAny___I4__SZARRAY_CHAR__I4__I4,
    Library_corlib_native_System_String::IndexOf___I4__STRING,
    Library_corlib_native_System_String::IndexOf___I4__STRING__I4,
    Library_corlib_native_System_String::IndexOf___I4__STRING__I4__I4,
    Library_corlib_native_System_String::LastIndexOf___I4__CHAR,
    Library_corlib_native_System_String::LastIndexOf___I4__CHAR__I4,
    Library_corlib_native_System_String::LastIndexOf___I4__CHAR__I4__I4,
    Library_corlib_native_System_String::LastIndexOfAny___I4__SZARRAY_CHAR,
    Library_corlib_native_System_String::LastIndexOfAny___I4__SZARRAY_CHAR__I4,
    Library_corlib_native_System_String::LastIndexOfAny___I4__SZARRAY_CHAR__I4__I4,
    Library_corlib_native_System_String::LastIndexOf___I4__STRING,
    Library_corlib_native_System_String::LastIndexOf___I4__STRING__I4,
    Library_corlib_native_System_String::LastIndexOf___I4__STRING__I4__I4,
    Library_corlib_native_System_String::ToLower___STRING,
    Library_corlib_native_System_String::ToUpper___STRING,
    Library_corlib_native_System_String::Trim___STRING,
    NULL,
    NULL,
    Library_corlib_native_System_String::Equals___STATIC__BOOLEAN__STRING__STRING,
    Library_corlib_native_System_String::op_Equality___STATIC__BOOLEAN__STRING__STRING,
    Library_corlib_native_System_String::op_Inequality___STATIC__BOOLEAN__STRING__STRING,
    Library_corlib_native_System_String::Compare___STATIC__I4__STRING__STRING,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_String::Concat___STATIC__STRING__STRING__STRING,
    Library_corlib_native_System_String::Concat___STATIC__STRING__STRING__STRING__STRING,
    Library_corlib_native_System_String::Concat___STATIC__STRING__STRING__STRING__STRING__STRING,
    Library_corlib_native_System_String::Concat___STATIC__STRING__SZARRAY_STRING,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Text_UTF8Decoder::Convert___VOID__SZARRAY_U1__I4__I4__SZARRAY_CHAR__I4__I4__BOOLEAN__BYREF_I4__BYREF_I4__BYREF_BOOLEAN,
    NULL,
    Library_corlib_native_System_Text_UTF8Encoding::GetBytes___SZARRAY_U1__STRING,
    Library_corlib_native_System_Text_UTF8Encoding::GetBytes___I4__STRING__I4__I4__SZARRAY_U1__I4,
    Library_corlib_native_System_Text_UTF8Encoding::GetChars___SZARRAY_CHAR__SZARRAY_U1,
    Library_corlib_native_System_Text_UTF8Encoding::GetChars___SZARRAY_CHAR__SZARRAY_U1__I4__I4,
    NULL,
    NULL,
    Library_corlib_native_System_Threading_WaitHandle::WaitOne___BOOLEAN__I4__BOOLEAN,
    NULL,
    NULL,
    Library_corlib_native_System_Threading_WaitHandle::WaitMultiple___STATIC__I4__SZARRAY_SystemThreadingWaitHandle__I4__BOOLEAN__BOOLEAN,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Threading_AutoResetEvent::_ctor___VOID__BOOLEAN,
    Library_corlib_native_System_Threading_AutoResetEvent::Reset___BOOLEAN,
    Library_corlib_native_System_Threading_AutoResetEvent::Set___BOOLEAN,
    Library_corlib_native_System_Threading_Interlocked::Increment___STATIC__I4__BYREF_I4,
    Library_corlib_native_System_Threading_Interlocked::Decrement___STATIC__I4__BYREF_I4,
    Library_corlib_native_System_Threading_Interlocked::Exchange___STATIC__I4__BYREF_I4__I4,
    Library_corlib_native_System_Threading_Interlocked::CompareExchange___STATIC__I4__BYREF_I4__I4__I4,
    Library_corlib_native_System_Threading_ManualResetEvent::_ctor___VOID__BOOLEAN,
    Library_corlib_native_System_Threading_ManualResetEvent::Reset___BOOLEAN,
    Library_corlib_native_System_Threading_ManualResetEvent::Set___BOOLEAN,
    Library_corlib_native_System_Threading_Monitor::Enter___STATIC__VOID__OBJECT,
    Library_corlib_native_System_Threading_Monitor::Exit___STATIC__VOID__OBJECT,
    Library_corlib_native_System_Threading_Thread::_ctor___VOID__SystemThreadingThreadStart,
    Library_corlib_native_System_Threading_Thread::Start___VOID,
    Library_corlib_native_System_Threading_Thread::Abort___VOID,
    Library_corlib_native_System_Threading_Thread::Suspend___VOID,
    Library_corlib_native_System_Threading_Thread::Resume___VOID,
    Library_corlib_native_System_Threading_Thread::get_Priority___SystemThreadingThreadPriority,
    Library_corlib_native_System_Threading_Thread::set_Priority___VOID__SystemThreadingThreadPriority,
    Library_corlib_native_System_Threading_Thread::get_ManagedThreadId___I4,
    Library_corlib_native_System_Threading_Thread::get_IsAlive___BOOLEAN,
    Library_corlib_native_System_Threading_Thread::Join___VOID,
    Library_corlib_native_System_Threading_Thread::Join___BOOLEAN__I4,
    Library_corlib_native_System_Threading_Thread::Join___BOOLEAN__SystemTimeSpan,
    Library_corlib_native_System_Threading_Thread::get_ThreadState___SystemThreadingThreadState,
    Library_corlib_native_System_Threading_Thread::Sleep___STATIC__VOID__I4,
    NULL,
    Library_corlib_native_System_Threading_Thread::get_CurrentThread___STATIC__SystemThreadingThread,
    Library_corlib_native_System_Threading_Thread::GetDomain___STATIC__SystemAppDomain,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_Threading_Timer::Dispose___VOID,
    Library_corlib_native_System_Threading_Timer::_ctor___VOID__SystemThreadingTimerCallback__OBJECT__I4__I4,
    Library_corlib_native_System_Threading_Timer::_ctor___VOID__SystemThreadingTimerCallback__OBJECT__SystemTimeSpan__SystemTimeSpan,
    Library_corlib_native_System_Threading_Timer::Change___BOOLEAN__I4__I4,
    Library_corlib_native_System_Threading_Timer::Change___BOOLEAN__SystemTimeSpan__SystemTimeSpan,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_TimeSpan::Equals___BOOLEAN__OBJECT,
    Library_corlib_native_System_TimeSpan::ToString___STRING,
    NULL,
    NULL,
    Library_corlib_native_System_TimeSpan::_ctor___VOID__I4__I4__I4,
    Library_corlib_native_System_TimeSpan::_ctor___VOID__I4__I4__I4__I4,
    Library_corlib_native_System_TimeSpan::_ctor___VOID__I4__I4__I4__I4__I4,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_TimeSpan::CompareTo___I4__OBJECT,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_TimeSpan::Compare___STATIC__I4__SystemTimeSpan__SystemTimeSpan,
    Library_corlib_native_System_TimeSpan::Equals___STATIC__BOOLEAN__SystemTimeSpan__SystemTimeSpan,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_corlib_native_System_WeakReference::get_IsAlive___BOOLEAN,
    Library_corlib_native_System_WeakReference::get_Target___OBJECT,
    Library_corlib_native_System_WeakReference::set_Target___VOID__OBJECT,
    Library_corlib_native_System_WeakReference::_ctor___VOID__OBJECT,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
};

const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_mscorlib =
{
    "mscorlib", 
    0x4811B74B,
    method_lookup,
    { 1, 0, 0, 0 }
};
