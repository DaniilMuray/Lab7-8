#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;



System::Void LAB7::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    try {

        double base1_1 = Double::Parse(textBox2->Text);
        double base2_1 = Double::Parse(textBox3->Text);
        double base3_1 = Double::Parse(textBox8->Text);
        double height1 = Double::Parse(textBox1->Text);
        double base1_2 = Double::Parse(textBox5->Text);
        double base2_2 = Double::Parse(textBox6->Text);
        double base3_2 = Double::Parse(textBox7->Text);
        double height2 = Double::Parse(textBox4->Text);

        RightTrianglePrism^ prism1 = gcnew RightTrianglePrism(base1_1, base2_1, base3_1, height1);
        RightTrianglePrism^ prism2 = gcnew RightTrianglePrism(base1_2, base2_2, base3_2, height2);

        double volumeDifference = prism1->volume() - prism2->volume();
        MessageBox::Show("The difference in volume between the two prisms is: " + fabs(volumeDifference) + "\nFirst prism: " + prism1->volume() + "\nSecond prism: " + prism2->volume());
    }
    catch (ArgumentException^ ex) {
        MessageBox::Show("Caught exception: " + ex->Message);
    }
}

System::Void LAB7::MyForm::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void LAB7::MyForm::textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void LAB7::MyForm::textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void LAB7::MyForm::textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void LAB7::MyForm::textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void LAB7::MyForm::textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void LAB7::MyForm::textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void LAB7::MyForm::textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}


[STAThreadAttribute]
void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    LAB7::MyForm form;
    Application::Run(% form);

}
