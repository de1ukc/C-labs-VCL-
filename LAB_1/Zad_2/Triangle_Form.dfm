object Form5: TForm5
  Left = 0
  Top = 0
  Align = alCustom
  Caption = 'Form5'
  ClientHeight = 486
  ClientWidth = 854
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 0
    Top = 0
    Width = 857
    Height = 489
    OnClick = Image1Click
  end
  object Button1: TButton
    Left = 672
    Top = 16
    Width = 75
    Height = 25
    Caption = 'Show'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 672
    Top = 47
    Width = 75
    Height = 25
    Caption = #1055#1077#1088#1077#1074#1086#1088#1086#1090
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 648
    Top = 89
    Width = 123
    Height = 25
    Caption = #1059#1074#1077#1083#1080#1095#1080#1090#1100' '#1088#1072#1079#1084#1077#1088
    TabOrder = 2
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 648
    Top = 120
    Width = 123
    Height = 25
    Caption = #1059#1084#1077#1085#1100#1096#1080#1090#1100' '#1088#1072#1079#1077#1088
    TabOrder = 3
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 648
    Top = 151
    Width = 123
    Height = 25
    Caption = #1055#1083#1086#1097#1072#1076#1100
    TabOrder = 4
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 648
    Top = 182
    Width = 123
    Height = 25
    Caption = #1055#1077#1088#1080#1084#1077#1090#1088
    TabOrder = 5
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 648
    Top = 213
    Width = 123
    Height = 25
    Caption = #1062#1077#1085#1090#1088' '#1084#1072#1089#1089
    TabOrder = 6
    OnClick = Button7Click
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 1
    OnTimer = Timer1Timer
    Left = 768
    Top = 304
  end
  object Timer2: TTimer
    Enabled = False
    Interval = 10
    OnTimer = Timer2Timer
    Left = 728
    Top = 304
  end
  object Timer3: TTimer
    Enabled = False
    Interval = 1
    OnTimer = Timer3Timer
    Left = 688
    Top = 304
  end
  object Timer4: TTimer
    Enabled = False
    Interval = 1
    OnTimer = Timer4Timer
    Left = 648
    Top = 304
  end
end