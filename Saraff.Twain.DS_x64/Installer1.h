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
#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Configuration::Install;
using namespace Saraff::Twain::DS;


namespace SaraffTwainDS_x64 {

	/// <summary>
	/// Summary for Installer1
	/// </summary>
	[RunInstaller(true)]
	public ref class Installer1 : public DataSourceInstaller{
	public:
		Installer1(void){
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Installer1(){
			if (components){
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void){
		}
#pragma endregion
	};
}
