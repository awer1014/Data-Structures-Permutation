object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Permutation'
  ClientHeight = 496
  ClientWidth = 563
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 24
    Top = 27
    Width = 40
    Height = 13
    Caption = 'Input = '
  end
  object Label2: TLabel
    Left = 24
    Top = 67
    Width = 20
    Height = 13
    Caption = 'n = '
  end
  object Edit1: TEdit
    Left = 72
    Top = 24
    Width = 121
    Height = 21
    TabOrder = 0
    Text = 'Edit1'
  end
  object Edit2: TEdit
    Left = 72
    Top = 64
    Width = 121
    Height = 21
    TabOrder = 1
    Text = '0'
  end
  object CheckBox1: TCheckBox
    Left = 72
    Top = 104
    Width = 97
    Height = 17
    Caption = 'Tracing'
    TabOrder = 2
  end
  object Button1: TButton
    Left = 240
    Top = 22
    Width = 105
    Height = 25
    Caption = 'Permutation'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 240
    Top = 62
    Width = 105
    Height = 25
    Caption = 'Clear'
    TabOrder = 4
    OnClick = Button2Click
  end
  object PageControl1: TPageControl
    Left = 8
    Top = 168
    Width = 547
    Height = 320
    ActivePage = TabSheet1
    TabOrder = 5
    object TabSheet1: TTabSheet
      Caption = 'Display'
      object Memo1: TMemo
        Left = -4
        Top = 0
        Width = 540
        Height = 289
        Lines.Strings = (
          'Memo1')
        TabOrder = 0
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'Tracing'
      ImageIndex = 1
      object Memo2: TMemo
        Left = -4
        Top = 0
        Width = 541
        Height = 289
        Lines.Strings = (
          'Memo2')
        TabOrder = 0
      end
    end
  end
end
