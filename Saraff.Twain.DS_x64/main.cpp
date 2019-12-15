/* ���� ���� �������� ������ ���������� Saraff.Twain.DS
 * � SARAFF SOFTWARE (����������� ������), 2015.
 * Saraff.Twain.DS - ��������� ���������: �� ������ ������������������ �� �/���
 * �������� �� �� �������� ������� ����������� ������������ �������� GNU � ��� ����,
 * � ����� ��� ���� ������������ ������ ���������� ������������ �����������;
 * ���� ������ 3 ��������, ���� (�� ������ ������) ����� ����� �������
 * ������.
 * Saraff.Twain.DS ���������������� � �������, ��� ��� ����� ��������,
 * �� ���� ������ ��������; ���� ��� ������� �������� ��������� ����
 * ��� ����������� ��� ������������ �����. ��������� ��. � ������� �����������
 * ������������ �������� GNU.
 * �� ������ ���� �������� ����� ������� ����������� ������������ �������� GNU
 * ������ � ���� ����������. ���� ��� �� ���, ��.
 * <http://www.gnu.org/licenses/>.)
 *
 * This file is part of Saraff.Twain.DS.
 * � SARAFF SOFTWARE (Kirnazhytski Andrei), 2015.
 * Saraff.Twain.DS is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * Saraff.Twain.DS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * You should have received a copy of the GNU Lesser General Public License
 * along with Saraff.Twain.DS. If not, see <http://www.gnu.org/licenses/>.
 *
 * PLEASE SEND EMAIL TO:  twain@saraff.ru.
 */
#include <Windows.h>
#include "twain.h"

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace Saraff::Twain::DS;

TW_UINT16 TW_CALLINGSTYLE DS_Entry(
	pTW_IDENTITY pOrigin, // source of message
	TW_UINT32 DG, // data group ID: DG_xxxx
	TW_UINT16 DAT, // data argument type: DAT_xxxx
	TW_UINT16 MSG, // message ID: MSG_xxxx
	TW_MEMREF pData // pointer to data
	){
		TwIdentity^ _srcId=(TwIdentity^)Marshal::PtrToStructure(IntPtr(pOrigin),TwIdentity::typeid);
		return (TW_UINT16)DataSourceServices::Current->ProcessRequest(_srcId,(TwDG)DG,(TwDAT)DAT,(TwMSG)MSG,IntPtr(pData));
}