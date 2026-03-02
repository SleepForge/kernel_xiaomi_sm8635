typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct NoteGnuPropertyElement_4 NoteGnuPropertyElement_4, *PNoteGnuPropertyElement_4;

struct NoteGnuPropertyElement_4 {
    dword prType;
    dword prDatasz;
    byte data[4];
};

typedef pointer pointer __((offset(0x18)));

typedef ulong size_t;

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType_AARCH64 {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_AARCH64_ATTRIBUTES=1879048195
} Elf_SectionHeaderType_AARCH64;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_AARCH64 sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
};

typedef struct NoteGnuProperty_4 NoteGnuProperty_4, *PNoteGnuProperty_4;

struct NoteGnuProperty_4 {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};



undefined1 charger_notifier;
undefined1 hboost_notifier;
undefined1 pen_charge_state_notifier;
undefined DAT_00103a64;
undefined DAT_00103d8d;
undefined DAT_0010459a;
undefined DAT_001053d7;
undefined1 battery_chg_write.glink_crash_num;
undefined DAT_001047b3;
undefined system_wq;
undefined battery_register_panel_notifier_work;
undefined battery_register_second_panel_notifier_work;
undefined battery_chg_state_cb;
undefined battery_chg_callback;
undefined battery_chg_ship_mode;
undefined battery_chg_shutdown;
pointer battery_class_usb_2_groups;
undefined1 battery_class_groups;
undefined battery_chg_probe.__key.21;
undefined *battery_tcd_ops;
pointer dev_type_xiaomi_uevent;
undefined charger_notifier_event;
undefined1 battery_prop_map;
undefined1 usb_prop_map;
undefined1 wls_prop_map;
undefined delayed_work_timer_fn;
undefined1 xm_prop_map;
undefined battery_chg_subsys_up_work;
undefined battery_chg_update_usb_type_work;
undefined battery_chg_check_status_work;
undefined pen_charge_notifier_work;
undefined usb_chg_lpd_check_work;
undefined generate_xm_quick_rev_chg_uevent;
undefined xm_charger_debug_info_print_work;
undefined generate_xm_charge_uvent;
undefined generate_xm_smartchg_uvent;
undefined xm_batt_update_work;
undefined xm_glink_crash_num_work;
undefined DAT_00103373;
undefined8 active_second_panel;
undefined DAT_001035da;
undefined8 active_panel;
undefined DAT_00102804;
undefined DAT_0010360a;
undefined DAT_00104a25;
undefined DAT_00105f53;
undefined DAT_00106374;
undefined4 DAT_00100710;
undefined4 DAT_00100778;
undefined DAT_00103dac;
undefined DAT_00104e11;
undefined DAT_00104e46;
undefined DAT_001056a5;
undefined DAT_001058ae;
undefined DAT_001063a8;
undefined DAT_00102e77;
undefined4 pen_charge_notifier_work.pen_charge_connect_last_time;
undefined DAT_0010481e;
undefined DAT_00105a38;
undefined DAT_00103aaa;
undefined DAT_00104a8f;
undefined DAT_00104c94;
undefined DAT_001033ce;
undefined DAT_00103ad2;
undefined DAT_0010514a;
undefined DAT_001056d9;
undefined DAT_00105f83;
undefined *qc_power_supply_usb_type_text;
undefined *power_supply_usb_type_text;
undefined DAT_0010418f;
undefined DAT_00104ea6;
undefined DAT_00105a69;
undefined DAT_00105e5b;
undefined DAT_00104ad5;
undefined4 xm_batt_update_work.last_capacity;
undefined DAT_00103425;
undefined DAT_00102c58;
undefined DAT_001031c2;
undefined DAT_001031fa;
undefined DAT_001038a2;
undefined DAT_00105a97;
undefined DAT_00105cf0;
undefined DAT_001061c2;
undefined8 battery_register_panel_notifier_work.cookie;
undefined screen_state_for_charge_callback;
undefined4 battery_register_panel_notifier_work.retry_count;
undefined DAT_00105432;
undefined DAT_00105ad1;
undefined8 battery_register_second_panel_notifier_work.cookie;
undefined4 battery_register_second_panel_notifier_work.retry_count;
undefined DAT_00102c97;
undefined DAT_00102ea4;
undefined DAT_00103000;
undefined DAT_0010322f;
undefined DAT_00103461;
undefined DAT_0010407d;
undefined DAT_001045de;
undefined DAT_001055c5;
undefined DAT_001056fd;
undefined DAT_00105b0d;
undefined DAT_00105b3f;
undefined1 validate_message._rs;
undefined DAT_0010502c;
undefined DAT_0010306b;
undefined DAT_00103287;
undefined DAT_00103696;
undefined DAT_001036d3;
undefined DAT_00103e13;
undefined DAT_0010420b;
undefined DAT_00104cef;
undefined DAT_00105ea9;
pointer PTR_s_usb-2_00100770;
pointer batt_psy_desc;
undefined1 psy_tzd_ops;
undefined DAT_001043f8;
pointer usb_psy_desc;
undefined DAT_0010462f;
pointer wls_psy_desc;
undefined DAT_00104b4c;
undefined DAT_00104f14;
undefined DAT_001049df;
undefined DAT_001035a9;
undefined DAT_00103855;
undefined4 xm_handle_smartchg_scene_upload.last_upload_scene;
undefined DAT_00103a36;
undefined DAT_00103ff3;
undefined DAT_00105396;
undefined DAT_001064eb;
undefined DAT_00102ddd;
undefined DAT_00102a3f;
undefined DAT_00104049;
undefined DAT_001051b9;
undefined DAT_001034bc;
undefined DAT_00103c8c;
undefined DAT_00104673;
undefined DAT_00104893;
undefined DAT_00104b8d;
undefined DAT_00105949;
undefined1 DAT_00106eb0;
undefined DAT_00103c5b;
undefined DAT_001051de;
undefined DAT_00105d1a;
undefined DAT_00105bcd;
undefined8 power_supply_read_temp.last_read_time;
undefined4 power_supply_read_temp.last_temp;
undefined DAT_00106452;
undefined DAT_0010286d;
undefined DAT_001028b8;
undefined DAT_001028e8;
undefined DAT_001034ff;
undefined DAT_00103cd7;
undefined DAT_00103e76;
undefined DAT_0010521c;
undefined DAT_00105241;
undefined DAT_00105d66;
undefined DAT_00106031;
undefined DAT_0010291b;
undefined DAT_001036d7;
undefined DAT_00105497;
undefined DAT_00105295;
undefined *qc_power_supply_wls_type_text;
undefined DAT_00102f39;
undefined DAT_00102960;
undefined DAT_0010392a;
undefined DAT_00103ead;
undefined DAT_0010372f;
undefined DAT_00105da2;
undefined DAT_00104294;
undefined DAT_0010444b;
undefined DAT_0010299b;
undefined DAT_001029c2;
undefined DAT_001046ee;
undefined DAT_00102f6b;
undefined DAT_00102ad3;
undefined *power_supply_usbc_text;
undefined DAT_0010448f;
undefined1 DAT_0010056c;
int DAT_00100570;
undefined4 adapter_cap;
undefined1 DAT_00100574;
int DAT_00100578;
undefined1 DAT_0010057c;
int DAT_00100580;
undefined1 DAT_00100584;
int DAT_00100588;
undefined1 DAT_0010058c;
int DAT_00100590;
undefined1 DAT_00100594;
int DAT_00100598;
undefined1 DAT_0010059c;
int DAT_001005a0;
undefined1 DAT_001005a4;
int DAT_001005a8;
undefined1 DAT_001005ac;
int DAT_001005b0;
undefined1 DAT_001005b4;
int DAT_001005b8;
undefined DAT_001060a4;
undefined DAT_00103743;
undefined DAT_00102b13;
undefined DAT_00103ee4;
undefined DAT_001060f3;
undefined DAT_001057c8;
undefined DAT_001057f5;
undefined DAT_0010611f;
undefined DAT_00102d51;
undefined DAT_001030ad;
undefined DAT_00105827;
undefined DAT_00105de8;
undefined DAT_00106158;
undefined DAT_0010358d;
undefined DAT_00104108;
undefined DAT_001052b5;
undefined DAT_00102d7c;
undefined DAT_0010624f;
undefined DAT_00104d37;
undefined DAT_00103bb9;
undefined DAT_00103785;
undefined DAT_0010492f;
undefined DAT_00104113;
undefined DAT_001059a7;
undefined DAT_00105502;
undefined DAT_00105c30;
undefined DAT_001037bc;
undefined DAT_00103f3d;
undefined DAT_001032fd;
undefined DAT_00102b6e;
undefined *POWER_SUPPLY_VENDOR_TEXT;
undefined *POWER_SUPPLY_CELL_VENDOR_TEXT;
undefined DAT_0010587f;
undefined DAT_00105553;
undefined DAT_00104994;
undefined DAT_0010450e;
undefined DAT_00102bdf;
undefined DAT_00106315;
undefined DAT_00104c3a;
undefined DAT_001039d9;
undefined DAT_00105310;
undefined4 DAT_00100120;
undefined8 ut_test_show.str;
undefined DAT_00100128;
undefined DAT_0010333c;
undefined DAT_00104d95;
undefined DAT_00102db8;
undefined DAT_00103fc9;
undefined DAT_00104c5f;
undefined DAT_0010336e;
undefined1 __this_module;
pointer battery_chg_driver;

void charger_reg_notifier(undefined8 param_1)

{
  blocking_notifier_chain_register(&charger_notifier,param_1);
  return;
}



void charger_unreg_notifier(undefined8 param_1)

{
  blocking_notifier_chain_unregister(&charger_notifier,param_1);
  return;
}



void charger_notifier_call_chain(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 local_1c;
  long local_18;
  
  lVar1 = sp_el0;
  local_18 = *(long *)(lVar1 + 0x638);
  local_1c = param_2;
  blocking_notifier_call_chain(&charger_notifier,param_1,&local_1c);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_18) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void register_hboost_event_notifier(undefined8 param_1)

{
  raw_notifier_chain_register(&hboost_notifier,param_1);
  return;
}



void unregister_hboost_event_notifier(undefined8 param_1)

{
  raw_notifier_chain_unregister(&hboost_notifier,param_1);
  return;
}



void StringToHex(byte *param_1,byte *param_2,int *param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  size_t sVar6;
  ulong uVar7;
  char cVar8;
  byte *pbVar9;
  ulong uVar10;
  char cVar11;
  
  sVar6 = strlen((char *)param_1);
  iVar5 = (int)sVar6;
  iVar3 = iVar5;
  if (iVar5 < 0) {
    iVar3 = iVar5 + 1;
  }
  uVar2 = iVar3 >> 1;
  uVar7 = (ulong)uVar2;
  pbVar9 = param_2;
  uVar10 = uVar7;
  if (iVar5 < 2) {
    uVar7 = 0;
  }
  else {
    do {
      bVar4 = *param_1;
      pbVar1 = param_1 + 1;
      param_1 = param_1 + 2;
      cVar8 = '\t';
      cVar11 = cVar8;
      if (0x2c < bVar4 - 0x3a) {
        cVar11 = '\0';
      }
      if (0x2c < *pbVar1 - 0x3a) {
        cVar8 = '\0';
      }
      uVar10 = uVar10 - 1;
      *pbVar9 = cVar8 + *pbVar1 & 0xf | (cVar11 + bVar4) * '\x10';
      pbVar9 = pbVar9 + 1;
    } while (uVar10 != 0);
  }
  iVar5 = iVar5 + uVar2 * -2;
  if (iVar5 != 0) {
    cVar11 = -0x37;
    if (0x2c < *param_1 - 0x3a) {
      cVar11 = -0x30;
    }
    param_2[uVar7] = cVar11 + *param_1;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = uVar2 + iVar5;
  }
  return;
}



void qti_battery_charger_get_prop(char *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x638);
  if ((param_2 == 0) &&
     ((((iVar1 = strcmp(param_1,"battery"), iVar1 == 0 ||
        (iVar1 = strcmp(param_1,"usb"), iVar1 == 0)) ||
       (iVar1 = strcmp(param_1,"usb-2"), iVar1 == 0)) ||
      (iVar1 = strcmp(param_1,"wireless"), iVar1 == 0)))) {
    lVar2 = power_supply_get_by_name(param_1);
    if ((lVar2 == 0) || (lVar3 = power_supply_get_drvdata(), lVar3 == 0)) {
      iVar1 = -0x13;
    }
    else {
      power_supply_put(lVar2);
      local_48 = *(undefined4 *)(lVar3 + 0x19c);
      local_3c = 0;
      local_44 = 0x1600000000;
      local_50 = 0x10000800a;
      iVar1 = battery_chg_write(lVar3,(long)&local_50,0x18);
      if (iVar1 == 0) {
        *param_3 = *(undefined4 *)(*(long *)(lVar3 + 400) + 0x58);
      }
    }
  }
  else {
    iVar1 = -0x16;
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x638) == local_38) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(iVar1);
}



void pen_charge_state_notifier_register_client(undefined8 param_1)

{
  atomic_notifier_chain_register(&pen_charge_state_notifier,param_1);
  return;
}



void pen_charge_state_notifier_unregister_client(undefined8 param_1)

{
  atomic_notifier_chain_unregister(&pen_charge_state_notifier,param_1);
  return;
}



void mievent_upload(undefined4 param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  char *__s1;
  undefined8 uVar11;
  uint uVar12;
  int *piVar13;
  int local_80 [4];
  ulong local_70;
  
  lVar6 = sp_el0;
  lVar6 = *(long *)(lVar6 + 0x638);
  uVar4 = cdev_tevent_alloc(param_1);
  _printk(&DAT_001053d7,"mievent_upload","mievent_upload",param_1,param_2);
  local_70 = 0xffffffd0;
  piVar13 = (int *)register0x00000008;
  if (0 < param_2) {
LAB_00107300:
    do {
      uVar1 = (uint)local_70;
      uVar12 = (uint)local_70;
      if ((int)(uint)local_70 < 0) {
        lVar9 = (long)(int)(uint)local_70;
        bVar2 = 0xfffffff8 < (uint)local_70;
        uVar5 = (uint)(lVar9 + 8U);
        local_70 = lVar9 + 8U & 0xffffffff;
        uVar12 = uVar5;
        if (bVar2) goto LAB_00107338;
        __s1 = *(char **)(&stack0xffffffffffffff78 + lVar9);
        piVar7 = piVar13;
        if (uVar1 == 0xfffffff8) {
          uVar12 = 0;
          goto LAB_0010734c;
        }
        uVar12 = uVar1 + 0x10;
        local_70 = (ulong)uVar12;
        if (0xfffffff8 < uVar5) goto LAB_0010734c;
        piVar7 = (int *)((long)local_80 + lVar9);
      }
      else {
LAB_00107338:
        piVar7 = piVar13 + 2;
        __s1 = *(char **)piVar13;
LAB_0010734c:
        piVar13 = piVar7 + 2;
      }
      uVar10 = *(undefined8 *)piVar7;
      iVar3 = strcmp(__s1,"char");
      if (iVar3 != 0) {
        iVar3 = strcmp(__s1,"int");
        if (iVar3 != 0) {
          _printk(&DAT_00103a64,"mievent_upload");
          break;
        }
        if (((int)uVar12 < 0) && (local_70 = (ulong)(uVar12 + 8), uVar12 < 0xfffffff9)) {
          piVar8 = (int *)(&stack0xffffffffffffff78 + (int)uVar12);
          piVar7 = piVar13;
        }
        else {
          piVar7 = piVar13 + 2;
          piVar8 = piVar13;
        }
        iVar3 = *piVar8;
        _printk(&DAT_0010459a,"mievent_upload","mievent_upload",uVar10,(long)iVar3);
        cdev_tevent_add_int(uVar4,uVar10,(long)iVar3);
        param_2 = param_2 + -1;
        piVar13 = piVar7;
        if (param_2 == 0) break;
        goto LAB_00107300;
      }
      if (((int)uVar12 < 0) && (local_70 = (ulong)(uVar12 + 8), uVar12 < 0xfffffff9)) {
        piVar8 = (int *)(&stack0xffffffffffffff78 + (int)uVar12);
        piVar7 = piVar13;
      }
      else {
        piVar7 = piVar13 + 2;
        piVar8 = piVar13;
      }
      uVar11 = *(undefined8 *)piVar8;
      _printk(&DAT_00103d8d,"mievent_upload","mievent_upload",uVar10,uVar11);
      cdev_tevent_add_str(uVar4,uVar10,uVar11);
      param_2 = param_2 + -1;
      piVar13 = piVar7;
    } while (param_2 != 0);
  }
  cdev_tevent_write(uVar4);
  cdev_tevent_destroy(uVar4);
  lVar9 = sp_el0;
  if (*(long *)(lVar9 + 0x638) != lVar6) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int battery_chg_write(long param_1,long param_2,int param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  lVar2 = param_1 + 0xd8;
  down_read(lVar2);
  if (((int)*(undefined8 *)(param_1 + 0x2ac) == 0) ||
     ((*(char *)(param_1 + 0x732) != '\0' && (*(char *)(param_1 + 0x730) != '\0')))) {
    up_read(lVar2);
    iVar5 = 0;
  }
  else {
    lVar3 = param_1 + 0xa8;
    mutex_lock(lVar3);
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(undefined1 *)(param_1 + 0xcc0) = 0;
    iVar5 = pmic_glink_write(*(undefined8 *)(param_1 + 0xa0),param_2,param_3);
    if (iVar5 == 0) {
      if (*(char *)(param_1 + 0x729) == '\0') {
        if (0x14 < battery_chg_write_glink_crash_num) {
          up_read(lVar2);
          mutex_unlock(lVar3);
          uVar4 = _system_wq;
          if (*(byte *)(param_1 + 0x78b) < 4) {
            uVar6 = 0x1d4c;
          }
          else {
            uVar6 = 75000;
            *(undefined1 *)(param_1 + 0x78b) = 4;
          }
          queue_delayed_work_on(0x20,uVar4,param_1 + 0x6a0,uVar6);
          return 0;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x729) = 0;
        bVar1 = *(char *)(param_1 + 0x78b) + 1;
        battery_chg_write_glink_crash_num = 0x13;
        if ((bVar1 & 0xfc) == 0) {
          battery_chg_write_glink_crash_num = 0;
        }
        *(byte *)(param_1 + 0x78b) = bVar1;
      }
      iVar5 = wait_for_completion_timeout(param_1 + 0x118,0xfa);
      if (iVar5 == 0) {
        battery_chg_write_glink_crash_num = battery_chg_write_glink_crash_num + 1;
        _printk(&DAT_001047b3,"battery_chg_write",battery_chg_write_glink_crash_num);
        if ((param_3 == 0x18) && (*(int *)(param_2 + 0x10) == 4)) {
          *(undefined1 *)(param_1 + 0xc9a) = 1;
        }
        up_read(lVar2);
        mutex_unlock(lVar3);
        if (*(char *)(param_1 + 0xc9a) == '\0') {
          return -0x6e;
        }
        return 0;
      }
      *(undefined1 *)(param_1 + 0x78b) = 0;
      if (((param_3 == 0x18) && (*(int *)(param_2 + 0x10) == 4)) &&
         (*(char *)(param_1 + 0xc9a) != '\0')) {
        *(undefined1 *)(param_1 + 0xc9a) = 0;
      }
      if (*(char *)(param_1 + 0xcc0) == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = -0x3d;
        *(undefined1 *)(param_1 + 0xcc0) = 0;
      }
    }
    mutex_unlock(lVar3);
    up_read(lVar2);
  }
  return iVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong battery_chg_probe(long param_1)

{
  long *plVar1;
  undefined **ppuVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  char *local_90;
  undefined8 local_88;
  long *local_80;
  code *local_78;
  code *local_70;
  long local_68;
  
  lVar5 = sp_el0;
  lVar8 = param_1 + 0x10;
  local_68 = *(long *)(lVar5 + 0x638);
  local_78 = (code *)0x0;
  local_70 = (code *)0x0;
  local_88 = 0;
  local_80 = (long *)0x0;
  local_90 = (char *)0x0;
  _dev_err(lVar8,"battery_chg probe start\n");
  plVar4 = (long *)devm_kmalloc(lVar8,0xda8,0xdc0);
  if (plVar4 != (long *)0x0) {
    plVar4[0x31] = (long)&battery_prop_map;
    *(undefined4 *)(plVar4 + 0x34) = 0x31;
    plVar4[0x33] = 0x300000001d;
    plVar4[0x39] = 0x320000000d;
    *(undefined4 *)(plVar4 + 0x3a) = 0x33;
    plVar4[0x43] = (long)&wls_prop_map;
    plVar4[0x45] = 0x340000000b;
    plVar4[0x37] = (long)&usb_prop_map;
    *(undefined4 *)(plVar4 + 0x46) = 0x35;
    *(undefined1 *)((long)plVar4 + 0x78d) = 1;
    plVar4[0x49] = (long)&xm_prop_map;
    plVar4[0x4b] = 0x500000010d;
    *(undefined4 *)(plVar4 + 0x4c) = 0x51;
    lVar5 = of_find_property(*(undefined8 *)(param_1 + 0x2f8),"qcom,multiport-usb",0);
    *(bool *)((long)plVar4 + 0xcc1) = lVar5 != 0;
    if (lVar5 != 0) {
      plVar4[0x3d] = (long)&usb_prop_map;
      *(undefined1 *)((long)plVar4 + 0x78e) = 1;
      plVar4[0x3f] = 0x100320000000d;
      *(undefined4 *)(plVar4 + 0x40) = 0x10033;
    }
    lVar5 = devm_kmalloc(lVar8,(ulong)*(uint *)(plVar4 + 0x33) << 2,0xdc0);
    plVar4[0x32] = lVar5;
    if (lVar5 != 0) {
      lVar5 = devm_kmalloc(lVar8,(ulong)*(uint *)(plVar4 + 0x39) << 2,0xdc0);
      plVar4[0x38] = lVar5;
      if (lVar5 != 0) {
        lVar5 = devm_kmalloc(lVar8,(ulong)*(uint *)(plVar4 + 0x3f) << 2,0xdc0);
        plVar4[0x3e] = lVar5;
        if (lVar5 != 0) {
          lVar5 = devm_kmalloc(lVar8,(ulong)*(uint *)(plVar4 + 0x45) << 2,0xdc0);
          plVar4[0x44] = lVar5;
          if (lVar5 != 0) {
            lVar5 = devm_kmalloc(lVar8,(ulong)*(uint *)(plVar4 + 0x4b) << 2,0xdc0);
            plVar4[0x4a] = lVar5;
            if (lVar5 != 0) {
              lVar5 = devm_kmalloc(lVar8,0x80,0xdc0);
              plVar4[0x30] = lVar5;
              if (lVar5 != 0) {
                lVar5 = devm_kmalloc(lVar8,0x20,0xdc0);
                plVar4[0xf9] = lVar5;
                if (lVar5 != 0) {
                  lVar5 = devm_kmalloc(lVar8,0x10,0xdc0);
                  plVar4[0xfa] = lVar5;
                  if (lVar5 != 0) {
                    __mutex_init(plVar4 + 0x15,"&bcdev->rw_lock",&battery_chg_probe___key_21);
                    plVar1 = plVar4 + 0x1b;
                    __init_rwsem(plVar1,"&bcdev->state_sem",&battery_chg_probe___key_21);
                    *(undefined4 *)(plVar4 + 0x23) = 0;
                    __init_swait_queue_head(plVar4 + 0x24,"&x->wait",&battery_chg_probe___key_21);
                    *(undefined4 *)(plVar4 + 0x27) = 0;
                    __init_swait_queue_head(plVar4 + 0x28,"&x->wait",&battery_chg_probe___key_21);
                    *(undefined4 *)(plVar4 + 0x2b) = 0;
                    __init_swait_queue_head(plVar4 + 0x2c,"&x->wait",&battery_chg_probe___key_21);
                    plVar4[0x56] = 0xfffffffe0;
                    plVar4[0x57] = (long)(plVar4 + 0x57);
                    plVar4[0x58] = (long)(plVar4 + 0x57);
                    plVar4[0x59] = (long)battery_chg_subsys_up_work;
                    plVar4[0x5c] = 0xfffffffe0;
                    plVar4[0x5d] = (long)(plVar4 + 0x5d);
                    plVar4[0x5e] = (long)(plVar4 + 0x5d);
                    plVar4[0x5f] = (long)battery_chg_update_usb_type_work;
                    plVar4[0x62] = 0xfffffffe0;
                    plVar4[99] = (long)(plVar4 + 99);
                    plVar4[100] = (long)(plVar4 + 99);
                    plVar4[0x65] = (long)battery_chg_check_status_work;
                    plVar4[0x1a7] = 0xfffffffe0;
                    plVar4[0x1a8] = (long)(plVar4 + 0x1a8);
                    plVar4[0x1a9] = (long)(plVar4 + 0x1a8);
                    plVar4[0x1aa] = (long)pen_charge_notifier_work;
                    plVar4[0x68] = 0xfffffffe0;
                    plVar4[0x69] = (long)(plVar4 + 0x69);
                    plVar4[0x6a] = (long)(plVar4 + 0x69);
                    plVar4[0x6b] = (long)usb_chg_lpd_check_work;
                    plVar4[0x1ae] = 0xfffffffe0;
                    plVar4[0x1af] = (long)(plVar4 + 0x1af);
                    plVar4[0x1b0] = (long)(plVar4 + 0x1af);
                    plVar4[0x1b1] = (long)generate_xm_quick_rev_chg_uevent;
                    plVar4[0x6e] = 0xfffffffe0;
                    plVar4[0x6f] = (long)(plVar4 + 0x6f);
                    plVar4[0x70] = (long)(plVar4 + 0x6f);
                    plVar4[0x71] = (long)xm_charger_debug_info_print_work;
                    init_timer_key(plVar4 + 0x74,&delayed_work_timer_fn,0x200000,0,0);
                    plVar4[0x7f] = 0xfffffffe0;
                    plVar4[0x80] = (long)(plVar4 + 0x80);
                    plVar4[0x81] = (long)(plVar4 + 0x80);
                    plVar4[0x82] = (long)generate_xm_charge_uvent;
                    init_timer_key(plVar4 + 0x85,&delayed_work_timer_fn,0x200000,0,0);
                    plVar4[0x90] = 0xfffffffe0;
                    plVar4[0x91] = (long)(plVar4 + 0x91);
                    plVar4[0x92] = (long)(plVar4 + 0x91);
                    plVar4[0x93] = (long)generate_xm_smartchg_uvent;
                    init_timer_key(plVar4 + 0x96,&delayed_work_timer_fn,0x200000,0,0);
                    plVar4[0xa1] = 0xfffffffe0;
                    plVar4[0xa2] = (long)(plVar4 + 0xa2);
                    plVar4[0xa3] = (long)(plVar4 + 0xa2);
                    plVar4[0xa4] = (long)xm_batt_update_work;
                    init_timer_key(plVar4 + 0xa7,&delayed_work_timer_fn,0x200000,0,0);
                    plVar4[0xd4] = 0xfffffffe0;
                    plVar4[0xd5] = (long)(plVar4 + 0xd5);
                    plVar4[0xd6] = (long)(plVar4 + 0xd5);
                    plVar4[0xd7] = (long)xm_glink_crash_num_work;
                    init_timer_key(plVar4 + 0xda,&delayed_work_timer_fn,0x200000,0,0);
                    plVar4[0xb2] = 0xfffffffe0;
                    *(undefined4 *)((long)plVar4 + 0xc94) = 1;
                    plVar4[0xb3] = (long)(plVar4 + 0xb3);
                    plVar4[0xb4] = (long)(plVar4 + 0xb3);
                    plVar4[0xb5] = (long)battery_register_panel_notifier_work;
                    init_timer_key(plVar4 + 0xb8,&delayed_work_timer_fn,0x200000,0,0);
                    plVar4[0xc3] = 0xfffffffe0;
                    plVar4[0xc4] = (long)(plVar4 + 0xc4);
                    plVar4[0xc5] = (long)(plVar4 + 0xc4);
                    plVar4[0xc6] = (long)battery_register_second_panel_notifier_work;
                    init_timer_key(plVar4 + 0xc9,&delayed_work_timer_fn,0x200000,0,0);
                    *plVar4 = lVar8;
                    local_88 = CONCAT44(local_88._4_4_,0x800a);
                    local_90 = "battery_charger";
                    local_70 = battery_chg_state_cb;
                    local_78 = battery_chg_callback;
                    local_80 = plVar4;
                    uVar9 = pmic_glink_register_client(lVar8,&local_90);
                    plVar4[0x14] = uVar9;
                    if (uVar9 < 0xfffffffffffff001) {
                      down_write(plVar1);
                      *(undefined4 *)((long)plVar4 + 0x2ac) = 1;
                      *(undefined1 *)((long)plVar4 + 0x78f) = 1;
                      up_write(plVar1);
                      *(undefined4 *)(plVar4 + 0xea) = 0xff;
                      plVar4[0xe8] = (long)battery_chg_ship_mode;
                      register_reboot_notifier(plVar4 + 0xe8);
                      *(undefined4 *)(plVar4 + 0xed) = 0xff;
                      plVar4[0xeb] = (long)battery_chg_shutdown;
                      register_reboot_notifier(plVar4 + 0xeb);
                      battery_chg_parse_dt(plVar4);
                      *(long **)(param_1 + 0xa8) = plVar4;
                      *(undefined4 *)((long)plVar4 + 0x72c) = 0xffffffea;
                      *(undefined4 *)((long)plVar4 + 0x774) = 1000000;
                      uVar6 = battery_chg_init_psy(plVar4);
                      uVar9 = uVar6 & 0xffffffff;
                      if (-1 < (int)uVar6) {
                        plVar7 = plVar4 + 1;
                        *plVar7 = (long)"qcom-battery";
                        ppuVar2 = (undefined **)&battery_class_groups;
                        if (*(char *)((long)plVar4 + 0xcc1) != '\0') {
                          ppuVar2 = &battery_class_usb_2_groups;
                        }
                        plVar4[3] = (long)ppuVar2;
                        uVar3 = __class_register(plVar7,&battery_chg_probe___key_21);
                        if ((int)uVar3 < 0) {
                          uVar9 = (ulong)uVar3;
                          _dev_err(lVar8,"Failed to create battery_class rc=%d\n",uVar9);
                        }
                        else {
                          uVar9 = devm_thermal_of_cooling_device_register
                                            (lVar8,*(undefined8 *)(param_1 + 0x2f8),
                                             **(undefined8 **)plVar4[0x2f],plVar4,&battery_tcd_ops);
                          if ((uVar9 != 0) && (uVar9 < 0xfffffffffffff001)) {
                            *(undefined4 *)((long)plVar4 + 0x73c) = 1000;
                            battery_chg_add_debugfs((long)plVar4);
                            *(undefined1 *)(plVar4 + 0xf2) = 0;
                            battery_chg_notify_enable((long)plVar4);
                            lVar8 = *plVar4;
                            device_set_wakeup_capable(lVar8,1);
                            device_wakeup_enable(lVar8);
                            queue_work_on(0x20,_system_wq,plVar4 + 0x5c);
                            queue_delayed_work_on(0x20,_system_wq,plVar4 + 0x6e,0x4e2);
                            queue_delayed_work_on(0x20,_system_wq,plVar4 + 0xa1,0);
                            queue_delayed_work_on(0x20,_system_wq,plVar4 + 0xb2,0x4e2);
                            queue_delayed_work_on(0x20,_system_wq,plVar4 + 0xc3,0x4e2);
                            *(undefined ***)(param_1 + 0x88) = &dev_type_xiaomi_uevent;
                            *(undefined2 *)(plVar4 + 0xe5) = 1;
                            builtin_strncpy((char *)((long)plVar4 + 0x7ac),"00.00.00",8);
                            builtin_strncpy((char *)((long)plVar4 + 0x79c),"00.00.00",8);
                            *(undefined4 *)((long)plVar4 + 0x7a4) = 0x30302e;
                            *(undefined4 *)((long)plVar4 + 0x7b4) = 0x30302e;
                            *(undefined1 *)(plVar4 + 0x191) = 0;
                            *(undefined1 *)((long)plVar4 + 0xc8a) = 0;
                            *(undefined4 *)((long)plVar4 + 0xc8c) = 0;
                            *(undefined4 *)((long)plVar4 + 0x794) = 0;
                            *(undefined1 *)((long)plVar4 + 0x78b) = 0;
                            *(undefined1 *)((long)plVar4 + 0xc9a) = 0;
                            plVar4[0x195] = (long)charger_notifier_event;
                            blocking_notifier_chain_register(&charger_notifier,plVar4 + 0x195);
                            _dev_err(param_1 + 0x10,"battery_chg probe done\n");
                            get_charge_control_en((long)plVar4);
                            uVar9 = 0;
                            goto LAB_001078e4;
                          }
                          uVar3 = (uint)uVar9;
                          if (uVar9 < 0xfffffffffffff001) {
                            uVar3 = 0;
                          }
                          uVar9 = (ulong)uVar3;
                          _dev_err(lVar8,"Failed to register thermal cooling device rc=%d\n",uVar9);
                          class_unregister(plVar7);
                        }
                      }
                      _dev_err(lVar8,"battery_chg probe error\n");
                      down_write(plVar1);
                      *(undefined4 *)((long)plVar4 + 0x2ac) = 0;
                      *(undefined1 *)((long)plVar4 + 0x78f) = 0;
                      up_write(plVar1);
                      pmic_glink_unregister_client(plVar4[0x14]);
                      cancel_work_sync(plVar4 + 0x5c);
                      cancel_work_sync(plVar4 + 0x56);
                      cancel_work_sync(plVar4 + 0x62);
                      cancel_delayed_work_sync(plVar4 + 0xb2);
                      cancel_delayed_work_sync(plVar4 + 0xc3);
                      complete(plVar4 + 0x23);
                      unregister_reboot_notifier(plVar4 + 0xe8);
                      unregister_reboot_notifier(plVar4 + 0xeb);
                    }
                    else if ((int)uVar9 == -0x205) {
                      uVar9 = 0xfffffdfb;
                    }
                    else {
                      _dev_err(lVar8,"Error in registering with pmic_glink %d\n",uVar9 & 0xffffffff)
                      ;
                    }
                    _dev_err(lVar8,"battery_chg probe error: pmic_glink_register_client FAILED\n");
                    goto LAB_001078e4;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar9 = 0xfffffff4;
LAB_001078e4:
  lVar8 = sp_el0;
  if (*(long *)(lVar8 + 0x638) == local_68) {
    return uVar9 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined8 battery_chg_remove(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0xa8);
  down_write(puVar2 + 0x1b);
  *(undefined4 *)((long)puVar2 + 0x2ac) = 0;
  *(undefined1 *)((long)puVar2 + 0x78f) = 0;
  up_write(puVar2 + 0x1b);
  uVar1 = *puVar2;
  device_wakeup_disable(uVar1);
  device_set_wakeup_capable(uVar1,0);
  debugfs_remove(puVar2[0x4d]);
  class_unregister(puVar2 + 1);
  pmic_glink_unregister_client(puVar2[0x14]);
  cancel_work_sync(puVar2 + 0x56);
  cancel_work_sync(puVar2 + 0x5c);
  cancel_work_sync(puVar2 + 0x62);
  unregister_reboot_notifier(puVar2 + 0xe8);
  unregister_reboot_notifier(puVar2 + 0xeb);
  cancel_delayed_work_sync(puVar2 + 0xb2);
  cancel_delayed_work_sync(puVar2 + 0xc3);
  if ((active_panel == 0) || (0xfffffffffffff000 < (ulong)puVar2[0x4e])) {
    _printk(&DAT_001035da,"battery_chg_remove");
  }
  else {
    panel_event_notifier_unregister();
  }
  if ((active_second_panel == 0) || (0xfffffffffffff000 < (ulong)puVar2[0x4f])) {
    _printk(&DAT_00103373,"battery_chg_remove");
  }
  else {
    panel_event_notifier_unregister();
  }
  return 0;
}



void battery_chg_subsys_up_work(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  lVar3 = param_1 + -0x2b0;
  local_44 = 0;
  local_4c = 0;
  if (*(char *)(param_1 + 0x4e0) == '\0') {
    local_50 = 4;
    local_58 = 0x20000800a;
    iVar2 = battery_chg_write(lVar3,(long)&local_58,0x1c);
    if (iVar2 < 0) {
      _printk(&DAT_00104a25,"battery_chg_notify_enable",iVar2);
    }
    else {
      *(undefined1 *)(param_1 + 0x4e0) = 1;
    }
  }
  msleep(200);
  uVar4 = *(uint *)(param_1 + 0x4c8);
  if (uVar4 != 0) {
    if (*(char *)(param_1 + 0x4d8) != '\0') {
      uVar1 = *(uint *)(param_1 + 0x4c4);
      if (uVar4 <= *(uint *)(param_1 + 0x4c4)) {
        uVar1 = uVar4;
      }
      uVar4 = uVar1;
      if (*(uint *)(param_1 + 0x4c0) <= uVar1) {
        uVar4 = *(uint *)(param_1 + 0x4c0);
      }
    }
    local_4c = 0xa00000000;
    local_50 = *(undefined4 *)(param_1 + -0x110);
    local_44 = CONCAT44(local_44._4_4_,uVar4);
    local_58 = 0x10000800a;
    iVar2 = battery_chg_write(lVar3,(long)&local_58,0x18);
    if (iVar2 < 0) {
      _printk(&DAT_00105f53,"__battery_psy_set_charge_current",uVar4,iVar2);
      _printk(&DAT_00102804,"battery_chg_subsys_up_work",*(undefined4 *)(param_1 + 0x4c8),iVar2);
      iVar2 = *(int *)(param_1 + 0x4cc);
      goto joined_r0x00108148;
    }
    *(uint *)(param_1 + 0x4c8) = uVar4;
  }
  iVar2 = *(int *)(param_1 + 0x4cc);
joined_r0x00108148:
  if ((iVar2 != 0) &&
     (iVar2 = usb_psy_set_icl(lVar3,(undefined8 *)(param_1 + -0x108),5,iVar2), iVar2 < 0)) {
    _printk(&DAT_00106374,"battery_chg_subsys_up_work",*(undefined4 *)(param_1 + 0x4cc),iVar2);
  }
  if (((*(char *)(param_1 + 0xa11) != '\0') && (*(int *)(param_1 + 0x4d0) != 0)) &&
     (iVar2 = usb_psy_set_icl(lVar3,(undefined8 *)(param_1 + -0xd8),5,*(int *)(param_1 + 0x4d0)),
     iVar2 < 0)) {
    _printk(&DAT_0010360a,"battery_chg_subsys_up_work",*(undefined4 *)(param_1 + 0x4d0),iVar2);
  }
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x638) == local_38) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void battery_chg_update_usb_type_work(long param_1)

{
  char cVar1;
  long lVar2;
  int iVar3;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = sp_el0;
  local_28 = *(long *)(lVar2 + 0x638);
  if (*(char *)(param_1 + 0x4ad) == '\0') goto LAB_00108378;
  local_34 = 0x700000000;
  local_38 = *(undefined4 *)(param_1 + -0x114);
  *(undefined1 *)(param_1 + 0x4ad) = 0;
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar3 = battery_chg_write(param_1 + -0x2e0,(long)&local_40,0x18);
  if (iVar3 < 0) {
    _printk(&DAT_00103dac,"battery_chg_update_usb_type_work",iVar3);
    cVar1 = *(char *)(param_1 + 0x4ae);
  }
  else {
    iVar3 = *(int *)(*(long *)(param_1 + -0x120) + 0x1c);
    if ((iVar3 != 1) && (iVar3 != 6)) {
      *(undefined4 *)(param_1 + 0x49c) = 0;
      iVar3 = *(int *)(*(long *)(param_1 + -0x120) + 0x1c);
    }
    switch(iVar3) {
    case 0:
      DAT_00100710 = 0;
      cVar1 = *(char *)(param_1 + 0x4ae);
      goto joined_r0x0010837c;
    case 2:
    case 9:
switchD_0010830c_caseD_2:
      DAT_00100710 = 5;
      break;
    case 3:
      DAT_00100710 = 6;
      break;
    case 4:
      DAT_00100710 = 7;
      break;
    case 5:
      DAT_00100710 = 8;
      break;
    case 6:
    case 7:
    case 8:
      DAT_00100710 = 9;
      break;
    default:
      if (iVar3 - 0x80U < 3) goto switchD_0010830c_caseD_2;
    case 1:
      DAT_00100710 = 4;
    }
LAB_00108378:
    cVar1 = *(char *)(param_1 + 0x4ae);
  }
joined_r0x0010837c:
  if (cVar1 == '\0') goto LAB_001084b0;
  local_38 = *(undefined4 *)(param_1 + -0xe4);
  *(undefined1 *)(param_1 + 0x4ae) = 0;
  local_2c = 0;
  local_34 = 0x700000000;
  local_40 = 0x10000800a;
  iVar3 = battery_chg_write(param_1 + -0x2e0,(long)&local_40,0x18);
  if (iVar3 < 0) {
    _printk(&DAT_00103dac,"battery_chg_update_usb_type_work",iVar3);
    goto LAB_001084b0;
  }
  iVar3 = *(int *)(*(long *)(param_1 + -0xf0) + 0x1c);
  if ((iVar3 != 1) && (iVar3 != 6)) {
    *(undefined4 *)(param_1 + 0x4a0) = 0;
    iVar3 = *(int *)(*(long *)(param_1 + -0xf0) + 0x1c);
  }
  switch(iVar3) {
  case 0:
    DAT_00100778 = 0;
    break;
  case 2:
  case 9:
switchD_001083f8_caseD_2:
    DAT_00100778 = 5;
    break;
  case 3:
    DAT_00100778 = 6;
    break;
  case 4:
    DAT_00100778 = 7;
    break;
  case 5:
    DAT_00100778 = 8;
    break;
  case 6:
  case 7:
  case 8:
    DAT_00100778 = 9;
    break;
  default:
    if (iVar3 - 0x80U < 3) goto switchD_001083f8_caseD_2;
  case 1:
    DAT_00100778 = 4;
  }
LAB_001084b0:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x638) == local_28) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void battery_chg_check_status_work(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  lVar3 = param_1 + -0x310;
  if ((*(char *)(param_1 + 0x989) != '\0') && (99 < *(uint *)(*(long *)(param_1 + -0x180) + 0x10)))
  {
    *(undefined1 *)(param_1 + 0x989) = 0;
  }
  local_48 = *(undefined4 *)(param_1 + -0x144);
  local_44 = 0;
  local_3c = 0;
  local_50 = 0x10000800a;
  iVar1 = battery_chg_write(lVar3,(long)&local_50,0x18);
  if (iVar1 < 0) {
    puVar2 = &DAT_00104e11;
  }
  else {
    local_48 = *(undefined4 *)(param_1 + -0xe4);
    local_44 = 0;
    local_3c = 0;
    local_50 = 0x10000800a;
    iVar1 = battery_chg_write(lVar3,(long)&local_50,0x18);
    if ((iVar1 < 0) || ((**(int **)(param_1 + -0x150) == 0 && (**(int **)(param_1 + -0xf0) == 0))))
    goto LAB_001085f4;
    local_44 = 0x400000000;
    local_48 = *(undefined4 *)(param_1 + -0x174);
    local_3c = 0;
    local_50 = 0x10000800a;
    iVar1 = battery_chg_write(lVar3,(long)&local_50,0x18);
    if (iVar1 < 0) {
      puVar2 = &DAT_001058ae;
    }
    else {
      if (99 < *(int *)(*(long *)(param_1 + -0x180) + 0x10) + 0x32U) goto LAB_001085f4;
      _printk(&DAT_00104e46,"battery_chg_check_status_work",*(undefined1 *)(param_1 + 0x989),
              *(undefined1 *)(param_1 + 0x47b));
      local_48 = *(undefined4 *)(param_1 + -0x174);
      local_3c = 0;
      local_44 = 0x700000000;
      local_50 = 0x10000800a;
      iVar1 = battery_chg_write(lVar3,(long)&local_50,0x18);
      if (-1 < iVar1) {
        if (*(uint *)(*(long *)(param_1 + -0x180) + 0x1c) / 1000 <= *(uint *)(param_1 + -0x70)) {
          _printk(&DAT_001056a5,"battery_chg_check_status_work");
          msleep(100);
          *(undefined1 *)(param_1 + 0x989) = 1;
        }
        goto LAB_001085f4;
      }
      puVar2 = &DAT_001063a8;
    }
  }
  _printk(puVar2,"battery_chg_check_status_work",iVar1);
LAB_001085f4:
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x638) == local_38) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void pen_charge_notifier_work(long param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar4 = sp_el0;
  puVar6 = (undefined4 *)(param_1 + -0xadc);
  local_38 = *(long *)(lVar4 + 0x638);
  lVar4 = param_1 + -0xd38;
  local_48 = *puVar6;
  local_44 = 0x6400000000;
  local_3c = 0;
  local_50 = 0x10000800a;
  iVar1 = battery_chg_write(lVar4,(long)&local_50,0x18);
  if (iVar1 < 0) {
    puVar2 = &DAT_00105a38;
  }
  else {
    plVar5 = (long *)(param_1 + -0xae8);
    _printk("%s:XM_PROP_PEN_HALL3 is %d\n","pen_charge_notifier_work",*(undefined4 *)(*plVar5 + 400)
           );
    local_48 = *puVar6;
    local_3c = 0;
    local_50 = 0x10000800a;
    local_44 = 0x6500000000;
    iVar1 = battery_chg_write(lVar4,(long)&local_50,0x18);
    if (iVar1 < 0) {
      puVar2 = &DAT_00102e77;
    }
    else {
      _printk("%s:XM_PROP_PEN_HALL4 is %d\n","pen_charge_notifier_work",
              *(undefined4 *)(*plVar5 + 0x194));
      local_48 = *puVar6;
      local_3c = 0;
      local_44 = 0x4800000000;
      local_50 = 0x10000800a;
      iVar1 = battery_chg_write(lVar4,(long)&local_50,0x18);
      if (-1 < iVar1) {
        _printk("%s:XM_PROP_REVERSE_CHG_STATE is %d\n","pen_charge_notifier_work",
                *(undefined4 *)(*plVar5 + 0x120));
        lVar4 = *plVar5;
        if ((*(int *)(lVar4 + 400) == 0) || (*(int *)(lVar4 + 0x194) == 0)) {
          uVar3 = (uint)((*(int *)(lVar4 + 0x120) - 2U & 0xfffffffd) == 0);
        }
        else {
          uVar3 = 0;
        }
        if (pen_charge_notifier_work_pen_charge_connect_last_time == uVar3) {
          _printk("%s:pen_charge_connect is %d, pen_charge_connect_last_time is %d, skip call chain\n"
                  ,"pen_charge_notifier_work",uVar3,uVar3);
          pen_charge_notifier_work_pen_charge_connect_last_time = uVar3;
        }
        else {
          atomic_notifier_call_chain(&pen_charge_state_notifier,uVar3,0);
          pen_charge_notifier_work_pen_charge_connect_last_time = uVar3;
        }
        goto LAB_0010882c;
      }
      puVar2 = &DAT_0010481e;
    }
  }
  _printk(puVar2,"pen_charge_notifier_work");
LAB_0010882c:
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void usb_chg_lpd_check_work(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  uint local_4c;
  long local_48;
  
  lVar2 = sp_el0;
  local_48 = *(long *)(lVar2 + 0x638);
  local_54 = 0x800000000;
  local_60 = 0x10000800a;
  uVar1 = *(uint *)(param_1 + 0x954) & *(uint *)(param_1 + 0x950);
  local_58 = *(undefined4 *)(param_1 + -0x170);
  local_4c = (uint)(uVar1 == 0);
  iVar3 = battery_chg_write(param_1 + -0x340,(long)&local_60,0x18);
  if (iVar3 < 0) {
    puVar4 = &DAT_00103aaa;
  }
  else {
    local_58 = *(undefined4 *)(param_1 + -0xe0);
    local_60 = 0x10000800a;
    local_54 = 0x7400000000;
    local_4c = uVar1;
    iVar3 = battery_chg_write(param_1 + -0x340,(long)&local_60,0x18);
    if (-1 < iVar3) {
      _printk(&DAT_00104c94,"usb_chg_lpd_check_work",uVar1,(uint)(uVar1 == 0));
      goto LAB_001089e0;
    }
    puVar4 = &DAT_00104a8f;
  }
  _printk(puVar4,"usb_chg_lpd_check_work",iVar3);
LAB_001089e0:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x638) == local_48) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void generate_xm_quick_rev_chg_uevent(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  char *local_b8;
  undefined8 uStack_b0;
  char local_a8 [128];
  long local_28;
  
  lVar1 = sp_el0;
  puVar3 = (undefined8 *)(param_1 + -0xd70);
  local_28 = *(long *)(lVar1 + 0x638);
  local_b8 = local_a8;
  local_a8[0x70] = '\0';
  local_a8[0x71] = '\0';
  local_a8[0x72] = '\0';
  local_a8[0x73] = '\0';
  local_a8[0x74] = '\0';
  local_a8[0x75] = '\0';
  local_a8[0x76] = '\0';
  local_a8[0x77] = '\0';
  local_a8[0x78] = '\0';
  local_a8[0x79] = '\0';
  local_a8[0x7a] = '\0';
  local_a8[0x7b] = '\0';
  local_a8[0x7c] = '\0';
  local_a8[0x7d] = '\0';
  local_a8[0x7e] = '\0';
  local_a8[0x7f] = '\0';
  local_a8[0x60] = '\0';
  local_a8[0x61] = '\0';
  local_a8[0x62] = '\0';
  local_a8[99] = '\0';
  local_a8[100] = '\0';
  local_a8[0x65] = '\0';
  local_a8[0x66] = '\0';
  local_a8[0x67] = '\0';
  local_a8[0x68] = '\0';
  local_a8[0x69] = '\0';
  local_a8[0x6a] = '\0';
  local_a8[0x6b] = '\0';
  local_a8[0x6c] = '\0';
  local_a8[0x6d] = '\0';
  local_a8[0x6e] = '\0';
  local_a8[0x6f] = '\0';
  local_a8[0x50] = '\0';
  local_a8[0x51] = '\0';
  local_a8[0x52] = '\0';
  local_a8[0x53] = '\0';
  local_a8[0x54] = '\0';
  local_a8[0x55] = '\0';
  local_a8[0x56] = '\0';
  local_a8[0x57] = '\0';
  local_a8[0x58] = '\0';
  local_a8[0x59] = '\0';
  local_a8[0x5a] = '\0';
  local_a8[0x5b] = '\0';
  local_a8[0x5c] = '\0';
  local_a8[0x5d] = '\0';
  local_a8[0x5e] = '\0';
  local_a8[0x5f] = '\0';
  local_a8[0x40] = '\0';
  local_a8[0x41] = '\0';
  local_a8[0x42] = '\0';
  local_a8[0x43] = '\0';
  local_a8[0x44] = '\0';
  local_a8[0x45] = '\0';
  local_a8[0x46] = '\0';
  local_a8[0x47] = '\0';
  local_a8[0x48] = '\0';
  local_a8[0x49] = '\0';
  local_a8[0x4a] = '\0';
  local_a8[0x4b] = '\0';
  local_a8[0x4c] = '\0';
  local_a8[0x4d] = '\0';
  local_a8[0x4e] = '\0';
  local_a8[0x4f] = '\0';
  local_a8[0x30] = '\0';
  local_a8[0x31] = '\0';
  local_a8[0x32] = '\0';
  local_a8[0x33] = '\0';
  local_a8[0x34] = '\0';
  local_a8[0x35] = '\0';
  local_a8[0x36] = '\0';
  local_a8[0x37] = '\0';
  local_a8[0x38] = '\0';
  local_a8[0x39] = '\0';
  local_a8[0x3a] = '\0';
  local_a8[0x3b] = '\0';
  local_a8[0x3c] = '\0';
  local_a8[0x3d] = '\0';
  local_a8[0x3e] = '\0';
  local_a8[0x3f] = '\0';
  local_a8[0x20] = '\0';
  local_a8[0x21] = '\0';
  local_a8[0x22] = '\0';
  local_a8[0x23] = '\0';
  local_a8[0x24] = '\0';
  local_a8[0x25] = '\0';
  local_a8[0x26] = '\0';
  local_a8[0x27] = '\0';
  local_a8[0x28] = '\0';
  local_a8[0x29] = '\0';
  local_a8[0x2a] = '\0';
  local_a8[0x2b] = '\0';
  local_a8[0x2c] = '\0';
  local_a8[0x2d] = '\0';
  local_a8[0x2e] = '\0';
  local_a8[0x2f] = '\0';
  local_a8[0x10] = '\0';
  local_a8[0x11] = '\0';
  local_a8[0x12] = '\0';
  local_a8[0x13] = '\0';
  local_a8[0x14] = '\0';
  local_a8[0x15] = '\0';
  local_a8[0x16] = '\0';
  local_a8[0x17] = '\0';
  local_a8[0x18] = '\0';
  local_a8[0x19] = '\0';
  local_a8[0x1a] = '\0';
  local_a8[0x1b] = '\0';
  local_a8[0x1c] = '\0';
  local_a8[0x1d] = '\0';
  local_a8[0x1e] = '\0';
  local_a8[0x1f] = '\0';
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = '\0';
  local_a8[5] = '\0';
  local_a8[6] = '\0';
  local_a8[7] = '\0';
  local_a8[8] = '\0';
  local_a8[9] = '\0';
  local_a8[10] = '\0';
  local_a8[0xb] = '\0';
  local_a8[0xc] = '\0';
  local_a8[0xd] = '\0';
  local_a8[0xe] = '\0';
  local_a8[0xf] = '\0';
  uStack_b0 = 0;
  snprintf(local_a8,0x80,"POWER_SUPPLY_REVERSE_QUICK_CHARGE=%d",
           (uint)(*(int *)(param_1 + -8) == 0x61));
  _dev_err(*puVar3,"%s:: event: %s ","generate_xm_quick_rev_chg_uevent",local_a8);
  iVar2 = kobject_uevent_env(*puVar3,2,&local_b8);
  if (iVar2 < 0) {
    _dev_err(*puVar3,"notify quick rev chg uevent fail, rc=%d\n",iVar2);
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void xm_charger_debug_info_print_work(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  char *pcVar8;
  undefined1 uVar9;
  long lVar10;
  undefined **ppuVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined4 *puVar16;
  int local_78 [2];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  int local_5c;
  long local_58;
  
  lVar13 = sp_el0;
  local_58 = *(long *)(lVar13 + 0x638);
  puVar14 = *(undefined8 **)(param_1 + -0x1c8);
  local_78[0] = 0;
  local_78[1] = 0;
  if (puVar14 == (undefined8 *)0x0) goto LAB_00108b38;
  uVar7 = usb_psy_get_prop(puVar14,4,local_78);
  iVar1 = local_78[0];
  if ((int)uVar7 != 0) {
    iVar1 = 0;
  }
  _printk(&DAT_001056d9,"xm_charger_debug_info_print_work",iVar1);
  uVar9 = 0;
  if (iVar1 == 1) {
    puVar16 = (undefined4 *)(param_1 + -0x114);
    lVar13 = param_1 + -0x370;
    local_64 = 0xee00000000;
    local_68 = *puVar16;
    local_5c = 0;
    local_70 = 0x10000800a;
    battery_chg_write(lVar13,(long)&local_70,0x18);
    uVar7 = usb_psy_get_prop(puVar14,0xc,local_78);
    iVar1 = local_78[0];
    if ((int)uVar7 != 0) {
      iVar1 = 0;
    }
    uVar7 = usb_psy_get_prop(puVar14,0x11,local_78);
    plVar15 = (long *)(param_1 + -0x120);
    lVar10 = *plVar15;
    iVar2 = local_78[0];
    if ((int)uVar7 != 0) {
      iVar2 = 0;
    }
    uVar3 = *(uint *)(lVar10 + 0x20);
    uVar7 = (ulong)uVar3;
    uVar4 = uVar3 - 0x80;
    if (uVar4 < 5) {
      ppuVar11 = &qc_power_supply_usb_type_text + uVar4;
      uVar12 = 0x28;
      uVar7 = (ulong)uVar4;
LAB_00108c70:
      if (uVar12 <= uVar7 * 8) {
                    // WARNING: Does not return
        pcVar5 = (code *)SoftwareBreakpoint(1,0x108e24);
        (*pcVar5)();
      }
      pcVar8 = *ppuVar11;
    }
    else {
      if (uVar3 < 10) {
        ppuVar11 = &power_supply_usb_type_text + uVar7;
        uVar12 = 0x50;
        goto LAB_00108c70;
      }
      pcVar8 = "Unknown";
    }
    _printk(&DAT_001033ce,"xm_charger_debug_info_print_work",pcVar8,*(undefined4 *)(param_1 + -0xe0)
            ,*(undefined4 *)(lVar10 + 0xd8),*(undefined4 *)(lVar10 + 0x7c),
            *(undefined4 *)(lVar10 + 0x3b8));
    local_68 = *puVar16;
    local_5c = 0;
    local_64 = 0x7200000000;
    local_70 = 0x10000800a;
    iVar6 = battery_chg_write(lVar13,(long)&local_70,0x18);
    if ((iVar6 == 0) &&
       (local_5c = *(int *)(param_1 + 0x91c), *(int *)(*plVar15 + 0x1c8) != local_5c)) {
      local_64 = 0x7200000000;
      local_68 = *(undefined4 *)(param_1 + -0x110);
      local_70 = 0x10000800a;
      battery_chg_write(lVar13,(long)&local_70,0x18);
      _printk(&DAT_00105f83,"xm_charger_debug_info_print_work",*(undefined4 *)(*plVar15 + 0x1c8),
              *(undefined4 *)(param_1 + 0x91c));
    }
    local_68 = *puVar16;
    local_5c = 0;
    local_70 = 0x10000800a;
    local_64 = 0x400000000;
    iVar6 = battery_chg_write(lVar13,(long)&local_70,0x18);
    if (((iVar6 == 0) && (*(int *)(*plVar15 + 0x10) == 0)) && (*(char *)(param_1 + 0x918) != '\0'))
    {
      local_64 = 0x400000000;
      local_68 = *(undefined4 *)(param_1 + -0x110);
      local_5c = 1;
      local_70 = 0x10000800a;
      battery_chg_write(lVar13,(long)&local_70,0x18);
      _printk(&DAT_0010514a,"xm_charger_debug_info_print_work",*(undefined4 *)(*plVar15 + 0x10),
              *(undefined1 *)(param_1 + 0x918));
    }
    _printk(&DAT_00103ad2,"xm_charger_debug_info_print_work",iVar1,iVar2);
    queue_delayed_work_on(0x20,_system_wq,param_1,0x1d4c);
    uVar9 = 1;
  }
  *(undefined1 *)(param_1 + 0x3b8) = uVar9;
LAB_00108b38:
  lVar13 = sp_el0;
  if (*(long *)(lVar13 + 0x638) == local_58) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void generate_xm_charge_uvent(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = sp_el0;
  puVar4 = (undefined8 *)(param_1 + -0x3f8);
  local_28 = *(long *)(lVar1 + 0x638);
  _dev_err(*puVar4,"%s+++","generate_xm_charge_uvent");
  kobject_uevent_env(*puVar4,2,0);
  if (*(uint *)(param_1 + -0x1d0) != 0) {
    uVar3 = 0;
    do {
      if (*(int *)(*(long *)(param_1 + -0x1e0) + uVar3 * 4) == 3) {
        if (-1 < (int)uVar3) {
          uStack_2c = 0;
          local_38 = *(undefined4 *)(param_1 + -0x1cc);
          local_40 = 0x10000800a;
          uStack_34 = 0;
          local_30 = (int)uVar3;
          iVar2 = battery_chg_write((long)puVar4,(long)&local_40,0x18);
          if (-1 < iVar2) {
            *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(*(long *)(param_1 + -0x1d8) + 0x18);
          }
        }
        goto LAB_00108eb4;
      }
      uVar3 = uVar3 + 1;
    } while (*(uint *)(param_1 + -0x1d0) != uVar3);
  }
  if (*(undefined8 **)(param_1 + -0x1f0) != (undefined8 *)0x0) {
    _printk(&DAT_0010418f,"get_property_id",3,*(undefined8 *)**(undefined8 **)(param_1 + -0x1f0));
  }
LAB_00108eb4:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void generate_xm_smartchg_uvent(long param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  char *local_b8;
  undefined8 uStack_b0;
  char local_a8 [128];
  long local_28;
  
  lVar1 = sp_el0;
  puVar4 = (undefined8 *)(param_1 + -0x480);
  local_28 = *(long *)(lVar1 + 0x638);
  local_b8 = local_a8;
  local_a8[0x70] = '\0';
  local_a8[0x71] = '\0';
  local_a8[0x72] = '\0';
  local_a8[0x73] = '\0';
  local_a8[0x74] = '\0';
  local_a8[0x75] = '\0';
  local_a8[0x76] = '\0';
  local_a8[0x77] = '\0';
  local_a8[0x78] = '\0';
  local_a8[0x79] = '\0';
  local_a8[0x7a] = '\0';
  local_a8[0x7b] = '\0';
  local_a8[0x7c] = '\0';
  local_a8[0x7d] = '\0';
  local_a8[0x7e] = '\0';
  local_a8[0x7f] = '\0';
  local_a8[0x60] = '\0';
  local_a8[0x61] = '\0';
  local_a8[0x62] = '\0';
  local_a8[99] = '\0';
  local_a8[100] = '\0';
  local_a8[0x65] = '\0';
  local_a8[0x66] = '\0';
  local_a8[0x67] = '\0';
  local_a8[0x68] = '\0';
  local_a8[0x69] = '\0';
  local_a8[0x6a] = '\0';
  local_a8[0x6b] = '\0';
  local_a8[0x6c] = '\0';
  local_a8[0x6d] = '\0';
  local_a8[0x6e] = '\0';
  local_a8[0x6f] = '\0';
  local_a8[0x50] = '\0';
  local_a8[0x51] = '\0';
  local_a8[0x52] = '\0';
  local_a8[0x53] = '\0';
  local_a8[0x54] = '\0';
  local_a8[0x55] = '\0';
  local_a8[0x56] = '\0';
  local_a8[0x57] = '\0';
  local_a8[0x58] = '\0';
  local_a8[0x59] = '\0';
  local_a8[0x5a] = '\0';
  local_a8[0x5b] = '\0';
  local_a8[0x5c] = '\0';
  local_a8[0x5d] = '\0';
  local_a8[0x5e] = '\0';
  local_a8[0x5f] = '\0';
  local_a8[0x40] = '\0';
  local_a8[0x41] = '\0';
  local_a8[0x42] = '\0';
  local_a8[0x43] = '\0';
  local_a8[0x44] = '\0';
  local_a8[0x45] = '\0';
  local_a8[0x46] = '\0';
  local_a8[0x47] = '\0';
  local_a8[0x48] = '\0';
  local_a8[0x49] = '\0';
  local_a8[0x4a] = '\0';
  local_a8[0x4b] = '\0';
  local_a8[0x4c] = '\0';
  local_a8[0x4d] = '\0';
  local_a8[0x4e] = '\0';
  local_a8[0x4f] = '\0';
  local_a8[0x30] = '\0';
  local_a8[0x31] = '\0';
  local_a8[0x32] = '\0';
  local_a8[0x33] = '\0';
  local_a8[0x34] = '\0';
  local_a8[0x35] = '\0';
  local_a8[0x36] = '\0';
  local_a8[0x37] = '\0';
  local_a8[0x38] = '\0';
  local_a8[0x39] = '\0';
  local_a8[0x3a] = '\0';
  local_a8[0x3b] = '\0';
  local_a8[0x3c] = '\0';
  local_a8[0x3d] = '\0';
  local_a8[0x3e] = '\0';
  local_a8[0x3f] = '\0';
  local_a8[0x20] = '\0';
  local_a8[0x21] = '\0';
  local_a8[0x22] = '\0';
  local_a8[0x23] = '\0';
  local_a8[0x24] = '\0';
  local_a8[0x25] = '\0';
  local_a8[0x26] = '\0';
  local_a8[0x27] = '\0';
  local_a8[0x28] = '\0';
  local_a8[0x29] = '\0';
  local_a8[0x2a] = '\0';
  local_a8[0x2b] = '\0';
  local_a8[0x2c] = '\0';
  local_a8[0x2d] = '\0';
  local_a8[0x2e] = '\0';
  local_a8[0x2f] = '\0';
  local_a8[0x10] = '\0';
  local_a8[0x11] = '\0';
  local_a8[0x12] = '\0';
  local_a8[0x13] = '\0';
  local_a8[0x14] = '\0';
  local_a8[0x15] = '\0';
  local_a8[0x16] = '\0';
  local_a8[0x17] = '\0';
  local_a8[0x18] = '\0';
  local_a8[0x19] = '\0';
  local_a8[0x1a] = '\0';
  local_a8[0x1b] = '\0';
  local_a8[0x1c] = '\0';
  local_a8[0x1d] = '\0';
  local_a8[0x1e] = '\0';
  local_a8[0x1f] = '\0';
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = '\0';
  local_a8[5] = '\0';
  local_a8[6] = '\0';
  local_a8[7] = '\0';
  local_a8[8] = '\0';
  local_a8[9] = '\0';
  local_a8[10] = '\0';
  local_a8[0xb] = '\0';
  local_a8[0xc] = '\0';
  local_a8[0xd] = '\0';
  local_a8[0xe] = '\0';
  local_a8[0xf] = '\0';
  uStack_b0 = 0;
  _dev_err(*puVar4,"%s+++","generate_xm_smartchg_uvent");
  local_c4 = 0x8500000000;
  local_c8 = *(undefined4 *)(param_1 + -0x224);
  local_bc = 0;
  local_d0 = 0x10000800a;
  iVar2 = battery_chg_write((long)puVar4,(long)&local_d0,0x18);
  if (iVar2 < 0) {
    puVar3 = &DAT_00105e5b;
  }
  else {
    snprintf(local_a8,0x80,"POWER_SUPPLY_SMART_SIC_MODE=%d",
             *(int *)(*(long *)(param_1 + -0x230) + 0x214));
    _printk(&DAT_00104ea6,"generate_xm_smartchg_uvent",local_a8);
    iVar2 = kobject_uevent_env(*puVar4,2,&local_b8);
    if (-1 < iVar2) goto LAB_00109058;
    puVar3 = &DAT_00105a69;
  }
  _printk(puVar3,"generate_xm_smartchg_uvent",iVar2);
LAB_00109058:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void xm_batt_update_work(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  long local_48;
  
  lVar4 = sp_el0;
  local_48 = *(long *)(lVar4 + 0x638);
  lVar4 = param_1 + -0x508;
  local_58 = *(undefined4 *)(param_1 + -0x36c);
  local_54 = 0x400000000;
  local_4c = 0;
  local_60 = 0x10000800a;
  battery_chg_write(lVar4,(long)&local_60,0x18);
  plVar5 = (long *)(param_1 + -0x378);
  local_54 = 0x7300000000;
  local_4c = 0;
  local_60 = 0x10000800a;
  local_58 = *(undefined4 *)(param_1 + -0x2ac);
  iVar3 = 8;
  if (0x5db < *(uint *)(*plVar5 + 0x10)) {
    iVar3 = 10;
  }
  battery_chg_write(lVar4,(long)&local_60,0x18);
  if (*(int *)(param_1 + 0x788) != 0) {
    iVar3 = 0x14;
  }
  iVar2 = iVar3;
  if (*(char *)(param_1 + -0x260) != '\0') {
    local_54 = 0;
    local_58 = *(undefined4 *)(param_1 + -0x33c);
    local_4c = 0;
    local_60 = 0x10000800a;
    iVar2 = battery_chg_write(lVar4,(long)&local_60,0x18);
    if (iVar2 < 0) {
      _printk(&DAT_00104e11,"xm_batt_update_work",iVar2);
    }
    iVar2 = 5;
    if (**(int **)(param_1 + -0x348) != 1) {
      iVar2 = iVar3;
    }
  }
  uVar1 = *(uint *)(*plVar5 + 0x10);
  if (uVar1 != xm_batt_update_work_last_capacity) {
    xm_batt_update_work_last_capacity = uVar1;
    power_supply_changed(*(undefined8 *)(param_1 + -0x390));
    uVar1 = *(uint *)(*plVar5 + 0x10);
  }
  _printk(&DAT_00104ad5,"xm_batt_update_work",*(int *)(*(long *)(param_1 + -0x2b8) + 0x1cc) * 100,
          *(undefined4 *)(param_1 + 0x788),*(undefined4 *)(param_1 + 0x78c),iVar2,(ulong)uVar1 / 100
         );
  queue_delayed_work_on(0x20,_system_wq,param_1,iVar2 * 0xfa);
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x638) != local_48) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void xm_glink_crash_num_work(long param_1)

{
  _printk(&DAT_00103425,"xm_glink_crash_num_work");
  *(undefined1 *)(param_1 + 0x89) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void battery_register_panel_notifier_work(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  char *pcVar6;
  int iVar7;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar3 = sp_el0;
  local_48 = *(long *)(lVar3 + 0x638);
  lVar3 = of_find_node_by_name(0,"charge-screen");
  if (lVar3 == 0) {
    _printk(&DAT_00105a97,"battery_register_panel_notifier_work",
            "battery_register_panel_notifier_work");
    goto LAB_00109470;
  }
  iVar1 = of_count_phandle_with_args(lVar3,"panel",0);
  if (iVar1 < 1) {
    puVar5 = &DAT_001038a2;
LAB_00109438:
    pcVar6 = "charge_check_panel";
LAB_00109440:
    _printk(puVar5,pcVar6,pcVar6);
  }
  else {
    iVar7 = 0;
    do {
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      iVar2 = __of_parse_phandle_with_args(lVar3,"panel",0,0,iVar7,&local_98);
      if ((iVar2 != 0) || (local_98 == 0)) {
        puVar5 = &DAT_001031c2;
        goto LAB_00109438;
      }
      uVar4 = of_drm_find_panel();
      active_panel = uVar4;
      if (uVar4 < 0xfffffffffffff001) goto joined_r0x001093b8;
      iVar7 = iVar7 + 1;
      active_panel = 0;
    } while (iVar1 != iVar7);
    if ((int)uVar4 == -0x205) {
      puVar5 = &DAT_001031c2;
      pcVar6 = "battery_register_panel_notifier_work";
      goto LAB_00109440;
    }
  }
joined_r0x001093b8:
  if (active_panel == 0) {
    if (0 < battery_register_panel_notifier_work_retry_count) {
      _printk(&DAT_00102c58,"battery_register_panel_notifier_work");
      battery_register_panel_notifier_work_retry_count =
           battery_register_panel_notifier_work_retry_count + -1;
      queue_delayed_work_on(0x20,_system_wq,param_1,0x4e2);
    }
  }
  else {
    battery_register_panel_notifier_work_cookie =
         panel_event_notifier_register
                   (1,5,active_panel,screen_state_for_charge_callback,param_1 + -0x590);
    _printk(&DAT_001061c2,"battery_register_panel_notifier_work",
            battery_register_panel_notifier_work_cookie);
    if (battery_register_panel_notifier_work_cookie < 0xfffffffffffff001) {
      puVar5 = &DAT_001031fa;
    }
    else {
      puVar5 = &DAT_00105cf0;
    }
    _printk(puVar5,"battery_register_panel_notifier_work");
  }
  *(ulong *)(param_1 + -800) = battery_register_panel_notifier_work_cookie;
LAB_00109470:
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x638) == local_48) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void battery_register_second_panel_notifier_work(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  char *pcVar6;
  int iVar7;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar3 = sp_el0;
  local_48 = *(long *)(lVar3 + 0x638);
  lVar3 = of_find_node_by_name(0,"charge-screen");
  if (lVar3 == 0) {
    _printk(&DAT_00105a97,"battery_register_second_panel_notifier_work",
            "battery_register_second_panel_notifier_work");
    goto LAB_001096a4;
  }
  iVar1 = of_count_phandle_with_args(lVar3,"panel1",0);
  if (iVar1 < 1) {
    puVar5 = &DAT_001038a2;
LAB_0010966c:
    pcVar6 = "charge_check_second_panel";
LAB_00109674:
    _printk(puVar5,pcVar6,pcVar6);
  }
  else {
    iVar7 = 0;
    do {
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      iVar2 = __of_parse_phandle_with_args(lVar3,"panel1",0,0,iVar7,&local_98);
      if ((iVar2 != 0) || (local_98 == 0)) {
        puVar5 = &DAT_001031c2;
        goto LAB_0010966c;
      }
      uVar4 = of_drm_find_panel();
      active_second_panel = uVar4;
      if (uVar4 < 0xfffffffffffff001) goto joined_r0x001095ec;
      iVar7 = iVar7 + 1;
      active_second_panel = 0;
    } while (iVar1 != iVar7);
    if ((int)uVar4 == -0x205) {
      puVar5 = &DAT_001031c2;
      pcVar6 = "battery_register_second_panel_notifier_work";
      goto LAB_00109674;
    }
  }
joined_r0x001095ec:
  if (active_second_panel == 0) {
    if (0 < battery_register_second_panel_notifier_work_retry_count) {
      _printk(&DAT_00105432,"battery_register_second_panel_notifier_work");
      battery_register_second_panel_notifier_work_retry_count =
           battery_register_second_panel_notifier_work_retry_count + -1;
      queue_delayed_work_on(0x20,_system_wq,param_1,0x4e2);
    }
  }
  else {
    battery_register_second_panel_notifier_work_cookie =
         panel_event_notifier_register
                   (2,6,active_second_panel,screen_state_for_charge_callback,param_1 + -0x618);
    _printk(&DAT_001061c2,"battery_register_second_panel_notifier_work",
            battery_register_second_panel_notifier_work_cookie);
    if (battery_register_second_panel_notifier_work_cookie < 0xfffffffffffff001) {
      puVar5 = &DAT_00105ad1;
    }
    else {
      puVar5 = &DAT_00105cf0;
    }
    _printk(puVar5,"battery_register_second_panel_notifier_work");
  }
  *(ulong *)(param_1 + -0x3a0) = battery_register_second_panel_notifier_work_cookie;
LAB_001096a4:
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x638) == local_48) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 battery_chg_callback(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  uint local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  down_read(param_1 + 0x1b);
  uVar8 = _system_wq;
  if (*(char *)((long)param_1 + 0x78f) == '\0') goto switchD_00109b08_caseD_31;
  iVar4 = *(int *)(param_2 + 8);
  switch(iVar4) {
  case 4:
  case 5:
  case 0x36:
  case 0x37:
  case 0x47:
  case 0x48:
    goto switchD_00109798_caseD_4;
  case 6:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x41:
  case 0x45:
  case 0x46:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
switchD_00109798_caseD_6:
    puVar6 = &DAT_00102c97;
    goto LAB_00109ce8;
  case 7:
    if (param_3 != 0x10) {
      _printk(&DAT_00105b0d,"handle_notification",param_3);
      goto switchD_00109b08_caseD_31;
    }
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 & 0xffff) == 0x79) {
      local_3c = uVar2 >> 0x10;
      raw_notifier_call_chain(&hboost_notifier,0,&local_3c);
      goto switchD_00109b08_caseD_31;
    }
    switch(uVar2) {
    case 0x30:
switchD_00109b08_caseD_30:
      plVar10 = param_1 + 0x2f;
      if (0 < *(int *)(param_1 + 0x54)) {
        puVar7 = param_1 + 0x62;
        goto LAB_00109d80;
      }
      break;
    case 0x31:
    case 0x33:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
      goto switchD_00109b08_caseD_31;
    case 0x32:
      plVar10 = param_1 + 0x35;
      puVar7 = param_1 + 0x5c;
      *(undefined1 *)((long)param_1 + 0x78d) = 1;
      goto LAB_00109d80;
    case 0x34:
      plVar10 = param_1 + 0x41;
      break;
    case 0x50:
      queue_delayed_work_on(0x20,_system_wq,param_1 + 0x7f,0);
      queue_work_on(0x20,_system_wq,param_1 + 0x1a7);
      plVar10 = param_1 + 0x2f;
      break;
    case 0x60:
      queue_delayed_work_on(0x20,_system_wq,param_1 + 0x90,0xfa);
      goto switchD_00109b08_caseD_31;
    case 0x61:
    case 0x62:
      *(uint *)(param_1 + 0x1ad) = uVar2;
      queue_work_on(0x20,_system_wq,param_1 + 0x1ae);
      goto switchD_00109b08_caseD_31;
    default:
      if (uVar2 != 0x10032) {
        if (uVar2 != 0x80) goto switchD_00109b08_caseD_31;
        goto switchD_00109b08_caseD_30;
      }
      if (*(char *)((long)param_1 + 0xcc1) == '\0') goto switchD_00109b08_caseD_31;
      plVar10 = param_1 + 0x3b;
      puVar7 = param_1 + 0x5c;
      *(undefined1 *)((long)param_1 + 0x78e) = 1;
      uVar8 = _system_wq;
LAB_00109d80:
      queue_work_on(0x20,uVar8,puVar7);
    }
    if (((plVar10 != (long *)0x0) && (*plVar10 != 0)) &&
       (power_supply_changed(), *(int *)((long)param_1 + 0x794) == 0)) {
      pm_wakeup_dev_event(*param_1,0x32,1);
    }
    goto switchD_00109b08_caseD_31;
  case 0x30:
    if ((param_3 == 0x90) && (puVar7 = (undefined8 *)param_1[0x30], puVar7 != (undefined8 *)0x0)) {
      uVar9 = *(undefined8 *)(param_2 + 0x28);
      uVar8 = *(undefined8 *)(param_2 + 0x10);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
      puVar7[2] = *(undefined8 *)(param_2 + 0x20);
      puVar7[3] = uVar9;
      *puVar7 = uVar8;
      puVar7[1] = uVar1;
      uVar9 = *(undefined8 *)(param_2 + 0x48);
      uVar8 = *(undefined8 *)(param_2 + 0x30);
      uVar1 = *(undefined8 *)(param_2 + 0x38);
      puVar7[6] = *(undefined8 *)(param_2 + 0x40);
      puVar7[7] = uVar9;
      puVar7[4] = uVar8;
      puVar7[5] = uVar1;
      uVar9 = *(undefined8 *)(param_2 + 0x68);
      uVar8 = *(undefined8 *)(param_2 + 0x50);
      uVar1 = *(undefined8 *)(param_2 + 0x58);
      puVar7[10] = *(undefined8 *)(param_2 + 0x60);
      puVar7[0xb] = uVar9;
      puVar7[8] = uVar8;
      puVar7[9] = uVar1;
      uVar9 = *(undefined8 *)(param_2 + 0x88);
      uVar8 = *(undefined8 *)(param_2 + 0x70);
      uVar1 = *(undefined8 *)(param_2 + 0x78);
      puVar7[0xe] = *(undefined8 *)(param_2 + 0x80);
      puVar7[0xf] = uVar9;
      puVar7[0xc] = uVar8;
      puVar7[0xd] = uVar1;
      iVar4 = strcmp((char *)param_1[0x30],"Debug_Board");
      *(bool *)((long)param_1 + 0x732) = iVar4 == 0;
    }
    else {
      if (param_3 == 0x18) {
        if (*(int *)(param_2 + 0x14) != 0) goto LAB_001099e8;
      }
      else if ((param_3 != 0x20) && (param_3 != 0x34)) {
        _printk(&DAT_0010407d,"validate_message",param_3,0x30);
        goto switchD_00109ddc_default;
      }
      if (*(uint *)(param_1 + 0x33) <= *(uint *)(param_2 + 0xc)) goto switchD_00109ddc_default;
      *(undefined4 *)(param_1[0x32] + (ulong)*(uint *)(param_2 + 0xc) * 4) =
           *(undefined4 *)(param_2 + 0x10);
    }
    goto switchD_00109798_caseD_4;
  case 0x31:
  case 0x33:
  case 0x35:
switchD_00109798_caseD_31:
    if (param_3 == 0x18) {
LAB_001099e0:
      if (*(int *)(param_2 + 0x14) != 0) {
LAB_001099e8:
        iVar4 = ___ratelimit(&validate_message__rs,"validate_message");
        if (iVar4 != 0) {
          _printk(&DAT_0010322f,"validate_message",*(undefined4 *)(param_2 + 8),
                  *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x14));
        }
        *(undefined1 *)(param_1 + 0x198) = 1;
        goto switchD_00109ddc_default;
      }
    }
    else if ((param_3 != 0x20) && (param_3 != 0x34)) {
      _printk(&DAT_0010407d,"validate_message",param_3);
      goto switchD_00109ddc_default;
    }
    goto switchD_00109798_caseD_4;
  case 0x32:
    if (param_3 == 0x18) {
      if (*(int *)(param_2 + 0x14) != 0) goto LAB_001099e8;
    }
    else if ((param_3 != 0x20) && (param_3 != 0x34)) {
      _printk(&DAT_0010407d,"validate_message",param_3,0x32);
      goto switchD_00109ddc_default;
    }
    if (*(uint *)(param_1 + 0x39) <= *(uint *)(param_2 + 0xc)) goto switchD_00109ddc_default;
    *(undefined4 *)(param_1[0x38] + (ulong)*(uint *)(param_2 + 0xc) * 4) =
         *(undefined4 *)(param_2 + 0x10);
    goto switchD_00109798_caseD_4;
  case 0x34:
    if (param_3 == 0x18) {
      if (*(int *)(param_2 + 0x14) != 0) goto LAB_001099e8;
    }
    else if ((param_3 != 0x20) && (param_3 != 0x34)) {
      _printk(&DAT_0010407d,"validate_message",param_3,0x34);
      goto switchD_00109ddc_default;
    }
    if (*(uint *)(param_1 + 0x45) <= *(uint *)(param_2 + 0xc)) goto switchD_00109ddc_default;
    *(undefined4 *)(param_1[0x44] + (ulong)*(uint *)(param_2 + 0xc) * 4) =
         *(undefined4 *)(param_2 + 0x10);
    goto switchD_00109798_caseD_4;
  case 0x40:
    if (param_3 != 0x10) {
      puVar6 = &DAT_001055c5;
LAB_00109cc4:
      _printk(puVar6,"handle_message",param_3);
      goto switchD_00109ddc_default;
    }
    if (*(int *)(param_2 + 0xc) == 1) {
      *(undefined1 *)((long)param_1 + 0x733) = 1;
    }
    goto switchD_00109798_caseD_4;
  case 0x42:
    if (param_3 != 0x10) {
      puVar6 = &DAT_00103000;
      goto LAB_00109cc4;
    }
    iVar4 = *(int *)(param_2 + 0xc);
    if (iVar4 == 1) {
      complete(param_1 + 0x2b);
      goto switchD_00109ddc_default;
    }
    puVar6 = &DAT_001045de;
LAB_00109ce8:
    _printk(puVar6,"handle_message",iVar4);
    goto switchD_00109ddc_default;
  case 0x43:
    if (param_3 != 0x10) {
      puVar6 = &DAT_00105b3f;
      goto LAB_00109cc4;
    }
    if (*(int *)(param_2 + 0xc) == 1) {
      complete(param_1 + 0x27);
    }
    goto switchD_00109ddc_default;
  case 0x44:
    if (param_3 != 0x10) {
      puVar6 = &DAT_001056fd;
      goto LAB_00109cc4;
    }
    *(undefined4 *)((long)param_1 + 0x734) = *(undefined4 *)(param_2 + 0xc);
    goto switchD_00109798_caseD_4;
  case 0x50:
    if ((param_3 == 0x34) && (puVar7 = (undefined8 *)param_1[0xf9], puVar7 != (undefined8 *)0x0)) {
      uVar9 = *(undefined8 *)(param_2 + 0x28);
      uVar8 = *(undefined8 *)(param_2 + 0x10);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
      puVar7[2] = *(undefined8 *)(param_2 + 0x20);
      puVar7[3] = uVar9;
      *puVar7 = uVar8;
      puVar7[1] = uVar1;
      goto switchD_00109798_caseD_4;
    }
    if ((param_3 == 0x20) && (puVar7 = (undefined8 *)param_1[0xfa], puVar7 != (undefined8 *)0x0)) {
      uVar8 = *(undefined8 *)(param_2 + 0x10);
      uVar9 = *(undefined8 *)(param_2 + 0x18);
LAB_00109ae0:
      *puVar7 = uVar8;
      puVar7[1] = uVar9;
      goto switchD_00109798_caseD_4;
    }
    switch(param_3) {
    case 0x18:
      if (*(int *)(param_2 + 0x14) != 0) goto LAB_001099e8;
    case 0x20:
    case 0x34:
      if (*(uint *)(param_1 + 0x4b) <= *(uint *)(param_2 + 0xc)) goto switchD_00109ddc_default;
      *(undefined4 *)(param_1[0x4a] + (ulong)*(uint *)(param_2 + 0xc) * 4) =
           *(undefined4 *)(param_2 + 0x10);
      goto switchD_00109798_caseD_4;
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
switchD_00109b98_caseD_19:
      _printk(&DAT_0010407d,"validate_message",param_3,0x50);
      goto switchD_00109ddc_default;
    case 0x24:
      uVar9 = *(undefined8 *)(param_2 + 0x1c);
      puVar7 = (undefined8 *)((long)param_1 + 0x79c);
      uVar8 = *(undefined8 *)(param_2 + 0x14);
      goto LAB_00109ae0;
    case 0x28:
      if (0x2a < *(byte *)(param_2 + 0x10)) {
switchD_00109e98_default:
        _printk(&DAT_00103461,"xm_handle_adsp_dfx_report");
        goto switchD_00109798_caseD_4;
      }
      break;
    case 0x2c:
      uVar8 = *(undefined8 *)(param_2 + 0x24);
      uVar9 = *(undefined8 *)(param_2 + 0x14);
      *(undefined8 *)((long)param_1 + 0x7b4) = *(undefined8 *)(param_2 + 0x1c);
      *(undefined8 *)((long)param_1 + 0x7bc) = uVar8;
      *(undefined8 *)((long)param_1 + 0x7ac) = uVar9;
      goto switchD_00109798_caseD_4;
    default:
      if (param_3 != 0xdc) goto switchD_00109b98_caseD_19;
      switch(*(undefined1 *)(param_2 + 0x10)) {
      case 0:
        puVar7 = param_1 + 0xfb;
        break;
      case 1:
        _printk(&DAT_00102ea4,"handle_message",param_2 + 0x11);
        goto switchD_00109ddc_default;
      case 2:
        param_1[300] = 0;
        puVar7 = param_1 + 0x114;
        param_1[299] = 0;
        param_1[0x12a] = 0;
        param_1[0x129] = 0;
        param_1[0x128] = 0;
        param_1[0x127] = 0;
        param_1[0x126] = 0;
        param_1[0x125] = 0;
        param_1[0x124] = 0;
        param_1[0x123] = 0;
        param_1[0x122] = 0;
        param_1[0x121] = 0;
        param_1[0x120] = 0;
        param_1[0x11f] = 0;
        param_1[0x11e] = 0;
        param_1[0x11d] = 0;
        param_1[0x11c] = 0;
        param_1[0x11b] = 0;
        param_1[0x11a] = 0;
        param_1[0x119] = 0;
        param_1[0x118] = 0;
        param_1[0x117] = 0;
        param_1[0x116] = 0;
        param_1[0x115] = 0;
        param_1[0x114] = 0;
        break;
      case 3:
      case 5:
        param_1[0x145] = 0;
        puVar7 = param_1 + 0x12d;
        param_1[0x144] = 0;
        param_1[0x143] = 0;
        param_1[0x142] = 0;
        param_1[0x141] = 0;
        param_1[0x140] = 0;
        param_1[0x13f] = 0;
        param_1[0x13e] = 0;
        param_1[0x13d] = 0;
        param_1[0x13c] = 0;
        param_1[0x13b] = 0;
        param_1[0x13a] = 0;
        param_1[0x139] = 0;
        param_1[0x138] = 0;
        param_1[0x137] = 0;
        param_1[0x136] = 0;
        param_1[0x135] = 0;
        param_1[0x134] = 0;
        param_1[0x133] = 0;
        param_1[0x132] = 0;
        param_1[0x131] = 0;
        param_1[0x130] = 0;
        param_1[0x12f] = 0;
        param_1[0x12e] = 0;
        param_1[0x12d] = 0;
        break;
      case 4:
      case 6:
        param_1[0x15e] = 0;
        puVar7 = param_1 + 0x146;
        param_1[0x15d] = 0;
        param_1[0x15c] = 0;
        param_1[0x15b] = 0;
        param_1[0x15a] = 0;
        param_1[0x159] = 0;
        param_1[0x158] = 0;
        param_1[0x157] = 0;
        param_1[0x156] = 0;
        param_1[0x155] = 0;
        param_1[0x154] = 0;
        param_1[0x153] = 0;
        param_1[0x152] = 0;
        param_1[0x151] = 0;
        param_1[0x150] = 0;
        param_1[0x14f] = 0;
        param_1[0x14e] = 0;
        param_1[0x14d] = 0;
        param_1[0x14c] = 0;
        param_1[0x14b] = 0;
        param_1[0x14a] = 0;
        param_1[0x149] = 0;
        param_1[0x148] = 0;
        param_1[0x147] = 0;
        param_1[0x146] = 0;
        break;
      case 7:
        param_1[0x177] = 0;
        puVar7 = param_1 + 0x15f;
        param_1[0x176] = 0;
        param_1[0x175] = 0;
        param_1[0x174] = 0;
        param_1[0x173] = 0;
        param_1[0x172] = 0;
        param_1[0x171] = 0;
        param_1[0x170] = 0;
        param_1[0x16f] = 0;
        param_1[0x16e] = 0;
        param_1[0x16d] = 0;
        param_1[0x16c] = 0;
        param_1[0x16b] = 0;
        param_1[0x16a] = 0;
        param_1[0x169] = 0;
        param_1[0x168] = 0;
        param_1[0x167] = 0;
        param_1[0x166] = 0;
        param_1[0x165] = 0;
        param_1[0x164] = 0;
        param_1[0x163] = 0;
        param_1[0x162] = 0;
        param_1[0x161] = 0;
        param_1[0x160] = 0;
        param_1[0x15f] = 0;
        break;
      case 8:
        param_1[400] = 0;
        puVar7 = param_1 + 0x178;
        param_1[399] = 0;
        param_1[0x18e] = 0;
        param_1[0x18d] = 0;
        param_1[0x18c] = 0;
        param_1[0x18b] = 0;
        param_1[0x18a] = 0;
        param_1[0x189] = 0;
        param_1[0x188] = 0;
        param_1[0x187] = 0;
        param_1[0x186] = 0;
        param_1[0x185] = 0;
        param_1[0x184] = 0;
        param_1[0x183] = 0;
        param_1[0x182] = 0;
        param_1[0x181] = 0;
        param_1[0x180] = 0;
        param_1[0x17f] = 0;
        param_1[0x17e] = 0;
        param_1[0x17d] = 0;
        param_1[0x17c] = 0;
        param_1[0x17b] = 0;
        param_1[0x17a] = 0;
        param_1[0x179] = 0;
        param_1[0x178] = 0;
        break;
      default:
        goto switchD_00109ddc_default;
      }
      memcpy(puVar7,(void *)(param_2 + 0x11),200);
      goto switchD_00109798_caseD_4;
    }
    break;
  case 0x51:
    if (param_3 == 0x18) goto LAB_001099e0;
    if ((param_3 != 0x20) && (param_3 != 0x34)) {
      _printk(&DAT_0010407d,"validate_message",param_3,0x51);
      goto switchD_00109ddc_default;
    }
    goto switchD_00109798_caseD_4;
  default:
    if (iVar4 == 0x10032) {
      if (*(char *)((long)param_1 + 0xcc1) != '\0') {
        if (param_3 == 0x18) {
          if (*(int *)(param_2 + 0x14) != 0) goto LAB_001099e8;
        }
        else if ((param_3 != 0x20) && (param_3 != 0x34)) {
          _printk(&DAT_0010407d,"validate_message",param_3,0x10032);
          goto switchD_00109ddc_default;
        }
        if (*(uint *)(param_2 + 0xc) < *(uint *)(param_1 + 0x3f)) {
          *(undefined4 *)(param_1[0x3e] + (ulong)*(uint *)(param_2 + 0xc) * 4) =
               *(undefined4 *)(param_2 + 0x10);
          goto switchD_00109798_caseD_4;
        }
      }
    }
    else {
      if (iVar4 != 0x10033) goto switchD_00109798_caseD_6;
      if (*(char *)((long)param_1 + 0xcc1) != '\0') goto switchD_00109798_caseD_31;
    }
switchD_00109ddc_default:
    if (*(char *)(param_1 + 0x198) == '\0') goto switchD_00109b08_caseD_31;
    goto switchD_00109798_caseD_4;
  }
  switch(*(byte *)(param_2 + 0x10)) {
  case 1:
    uVar5 = 0x362e50c9;
    break;
  case 2:
    uVar5 = 0x362e50ca;
    break;
  case 3:
    uVar5 = 0x362e50cb;
    break;
  case 4:
    mievent_upload(0x362e4513,1);
    goto switchD_00109798_caseD_4;
  case 5:
    mievent_upload(0x362e4513,1);
    goto switchD_00109798_caseD_4;
  case 6:
    uVar5 = 0x362e4512;
    break;
  case 7:
    uVar5 = 0x362e4511;
    break;
  case 8:
    uVar5 = 0x362e700c;
    break;
  case 9:
    uVar5 = 0x362e4514;
    break;
  case 10:
    uVar5 = 0x362e4515;
    break;
  case 0xb:
    uVar5 = 0x362e4516;
    goto LAB_0010a950;
  case 0xc:
    uVar5 = 0x362e4517;
    break;
  case 0xd:
    uVar5 = 0x362e412c;
    goto LAB_0010a950;
  case 0xe:
    uVar5 = 0x362e412d;
    break;
  case 0xf:
    uVar5 = 0x362e48f9;
    goto LAB_0010a950;
  case 0x10:
    uVar5 = 0x362e48fc;
    goto LAB_0010a950;
  case 0x11:
    uVar5 = 0x362e50cf;
    goto LAB_0010a950;
  case 0x12:
    uVar5 = 0x362e50d0;
    goto LAB_0010a950;
  case 0x13:
    uVar5 = 0x362e50d1;
    goto LAB_0010a950;
  case 0x14:
    uVar5 = 0x362e589a;
    goto LAB_0010a950;
  case 0x15:
    uVar5 = 0x362e6069;
    goto LAB_0010a4c0;
  case 0x16:
    uVar5 = 0x362e606a;
LAB_0010a4c0:
    iVar4 = 3;
    goto LAB_0010a90c;
  case 0x17:
    uVar5 = 0x362e606b;
    break;
  case 0x18:
    uVar5 = 0x362e451c;
    goto LAB_0010a950;
  case 0x19:
    uVar5 = 0x362e73f2;
    iVar4 = 3;
    goto LAB_0010a90c;
  case 0x1a:
    uVar5 = 0x362e50cc;
    iVar4 = 3;
    goto LAB_0010a90c;
  case 0x1b:
    uVar5 = 0x362e6839;
    break;
  case 0x1c:
    uVar5 = 0x362e683a;
    iVar4 = 3;
    goto LAB_0010a90c;
  case 0x1d:
    uVar5 = 0x362e6c21;
    break;
  case 0x1e:
    uVar5 = 0x362e6c22;
    break;
  case 0x1f:
    uVar5 = 0x362e6c23;
    break;
  case 0x20:
    uVar5 = 0x362e6c24;
    break;
  case 0x21:
    uVar5 = 0x362e6c25;
    break;
  case 0x22:
    uVar5 = 0x362e6c26;
    break;
  case 0x23:
    uVar5 = 0x362e7009;
    break;
  case 0x24:
    uVar5 = 0x362e48fe;
    goto LAB_0010a950;
  case 0x25:
    uVar5 = 0x362e54ba;
    goto LAB_0010a950;
  case 0x26:
    uVar5 = 0x362e54bb;
    goto LAB_0010a950;
  case 0x27:
    uVar5 = 0x362e5899;
    break;
  case 0x28:
    uVar5 = 0x362e48fa;
    iVar4 = 4;
    goto LAB_0010a90c;
  case 0x29:
    uVar5 = 0x362e412e;
    iVar4 = 6;
LAB_0010a90c:
    mievent_upload(uVar5,iVar4);
    goto switchD_00109798_caseD_4;
  case 0x2a:
    uVar5 = 0x362e412f;
LAB_0010a950:
    mievent_upload(uVar5,2);
    goto switchD_00109798_caseD_4;
  default:
    goto switchD_00109e98_default;
  }
  mievent_upload(uVar5,1);
switchD_00109798_caseD_4:
  complete(param_1 + 0x23);
switchD_00109b08_caseD_31:
  up_read(param_1 + 0x1b);
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void battery_chg_state_cb(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0xd8;
  down_write(lVar1);
  if (*(char *)(param_1 + 0x78f) == '\0') {
    _printk(&DAT_0010502c,"battery_chg_state_cb",param_2);
    up_write(lVar1);
  }
  else {
    *(int *)(param_1 + 0x2ac) = param_2;
    up_write(lVar1);
    if (param_2 == 0) {
      *(undefined1 *)(param_1 + 0x790) = 0;
    }
    else if (param_2 == 1) {
      queue_work_on(0x20,_system_wq,param_1 + 0x2b0);
    }
  }
  return;
}



undefined8 battery_chg_ship_mode(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_18;
  
  lVar1 = sp_el0;
  local_18 = *(long *)(lVar1 + 0x638);
  if (*(char *)(param_1 + -0xf) != '\0') {
    local_28 = 0x10000800a;
    uStack_20 = 0x36;
    if (param_2 == 3) {
      iVar2 = battery_chg_write(param_1 + -0x740,(long)&local_28,0x10);
      if (iVar2 < 0) {
        _printk(&DAT_0010306b,"battery_chg_ship_mode",iVar2);
      }
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_18) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void battery_chg_shutdown(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_48;
  undefined2 local_40;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  lVar3 = param_1 + -0x758;
  local_78 = 0;
  local_64 = 0x7900000000;
  local_68 = *(undefined4 *)(param_1 + -0x4fc);
  local_88 = 0;
  local_80 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_70 = 0x10000800a;
  local_58 = 0;
  local_5c = 0;
  iVar1 = battery_chg_write(lVar3,(long)&local_70,0x18);
  if (-1 < iVar1) {
    scnprintf(&local_48,0x1000,&DAT_00103287,*(undefined4 *)(*(long *)(param_1 + -0x508) + 0x1e4));
  }
  iVar1 = kstrtoint(&local_48,10,(long)&local_88 + 4);
  if (iVar1 == 0) {
    if (local_88._4_4_ == 1) {
      _printk(&DAT_0010420b,"battery_chg_shutdown",1);
    }
    else {
      _printk(&DAT_00105ea9,"battery_chg_shutdown");
    }
    local_68 = *(undefined4 *)(param_1 + -0x4fc);
    local_5c = 0;
    local_64 = 0x7d00000000;
    local_70 = 0x10000800a;
    iVar1 = battery_chg_write(lVar3,(long)&local_70,0x18);
    if (-1 < iVar1) {
      scnprintf(&local_58,0x1000,&DAT_001036d3,*(undefined4 *)(*(long *)(param_1 + -0x508) + 500));
    }
    iVar1 = kstrtoint(&local_58,10,&local_88);
    if (iVar1 == 0) {
      _printk(&DAT_00104cef,"battery_chg_shutdown",local_88 & 0xffffffff);
      local_78 = 0x37;
      local_80 = 0x10000800a;
      if ((param_2 & 0xfffffffffffffffd) == 1) {
        _printk(&DAT_00103e13,"battery_chg_shutdown");
        iVar1 = battery_chg_write(lVar3,(long)&local_80,0xc);
        if (iVar1 < 0) {
          _printk(&DAT_00103696,"battery_chg_shutdown",iVar1);
        }
      }
      uVar2 = 0;
      goto LAB_0010ab74;
    }
  }
  uVar2 = 0xffffffea;
LAB_0010ab74:
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x638) == local_38) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



void battery_chg_parse_dt(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*param_1 + 0x2e8);
  of_property_read_string(uVar2,"qcom,wireless-fw-name",param_1 + 0x51);
  of_property_read_variable_u32_array(uVar2,"qcom,shutdown-voltage",param_1 + 0x54,1,0);
  *(undefined4 *)((long)param_1 + 0x29c) = 0x10;
  *(undefined4 *)(param_1 + 0xee) = *(undefined4 *)(param_1[0x32] + 0x2c);
  lVar1 = of_find_property(uVar2,"mi,support-shutdown-delay",0);
  *(bool *)(param_1 + 0x193) = lVar1 != 0;
  lVar1 = of_find_property(uVar2,"mi,support-fast-update-timer",0);
  *(bool *)(param_1 + 0x55) = lVar1 != 0;
  lVar1 = of_find_property(uVar2,"mi,support-ut-test",0);
  *(bool *)((long)param_1 + 0xcc2) = lVar1 != 0;
  lVar1 = of_find_property(uVar2,"mi,support-ut-test-region",0);
  *(bool *)((long)param_1 + 0xcc3) = lVar1 != 0;
  lVar1 = of_find_property(uVar2,"mi,support-ut-test-multi-volt",0);
  *(bool *)(param_1 + 0x1b4) = lVar1 != 0;
  if (*(char *)((long)param_1 + 0xcc3) != '\0') {
    of_property_read_string(uVar2,"mi,cycle_volt_gl",param_1 + 0x19d);
    of_property_read_string(uVar2,"mi,cycle_step_curr_gl",param_1 + 0x19e);
    of_property_read_string(uVar2,"mi,thermal_gl",param_1 + 0x19f);
    of_property_read_string(uVar2,"mi,temp_term_curr_gl_nvt",param_1 + 0x1a0);
    of_property_read_string(uVar2,"mi,temp_term_curr_gl_sunwoda",param_1 + 0x1a1);
    of_property_read_string(uVar2,"mi,cycle_volt_cn",param_1 + 0x1a2);
    of_property_read_string(uVar2,"mi,cycle_step_curr_cn",param_1 + 0x1a3);
    of_property_read_string(uVar2,"mi,thermal_cn",param_1 + 0x1a4);
    of_property_read_string(uVar2,"mi,temp_term_curr_cn_nvt",param_1 + 0x1a5);
    of_property_read_string(uVar2,"mi,temp_term_curr_cn_sunwoda",param_1 + 0x1a6);
  }
  of_property_read_string(uVar2,"mi,cycle_volt",param_1 + 0x199);
  of_property_read_string(uVar2,"mi,cycle_step_curr",param_1 + 0x19a);
  of_property_read_string(uVar2,"mi,temp_term_curr",param_1 + 0x19b);
  of_property_read_string(uVar2,"mi,thermal",param_1 + 0x19c);
  return;
}



ulong battery_chg_init_psy(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 local_60;
  undefined8 local_58;
  long *plStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  local_60 = *(undefined8 *)(*param_1 + 0x2e8);
  plStack_50 = param_1;
  puVar2 = (undefined8 *)devm_power_supply_register(*param_1,&batt_psy_desc,&local_60);
  param_1[0x2f] = (long)puVar2;
  if ((undefined8 *)0xfffffffffffff000 < puVar2) {
    param_1[0x2f] = 0;
    _printk(&DAT_00104f14,"battery_chg_init_psy",(ulong)puVar2 & 0xffffffff);
    goto LAB_0010aff4;
  }
  uVar3 = thermal_zone_device_register(*(undefined8 *)*puVar2,0,0,puVar2,&psy_tzd_ops,0,0,0);
  puVar2[0x92] = uVar3;
  puVar2 = (undefined8 *)devm_power_supply_register(*param_1,&usb_psy_desc,&local_60);
  param_1[0x35] = (long)puVar2;
  if (puVar2 < (undefined8 *)0xfffffffffffff001) {
    if (*(char *)((long)param_1 + 0xcc1) != '\0') {
      puVar2 = (undefined8 *)devm_power_supply_register(*param_1,&PTR_s_usb_2_00100770,&local_60);
      param_1[0x3b] = (long)puVar2;
      if ((undefined8 *)0xfffffffffffff000 < puVar2) {
        param_1[0x3b] = 0;
        puVar4 = &DAT_00104b4c;
        goto LAB_0010b078;
      }
    }
    puVar2 = (undefined8 *)devm_power_supply_register(*param_1,&wls_psy_desc,&local_60);
    param_1[0x41] = (long)puVar2;
    if (puVar2 < (undefined8 *)0xfffffffffffff001) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_0010aff4;
    }
    puVar4 = &DAT_0010462f;
    param_1[0x41] = 0;
  }
  else {
    param_1[0x35] = 0;
    puVar4 = &DAT_001043f8;
  }
LAB_0010b078:
  _printk(puVar4,"battery_chg_init_psy",(ulong)puVar2 & 0xffffffff);
LAB_0010aff4:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (ulong)puVar2 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void battery_chg_add_debugfs(long param_1)

{
  ulong uVar1;
  
  uVar1 = debugfs_create_dir("battery_charger",0);
  if (uVar1 < 0xfffffffffffff001) {
    *(ulong *)(param_1 + 0x268) = uVar1;
    debugfs_create_bool("block_tx",0x180,uVar1,param_1 + 0x730);
  }
  else {
    _printk(&DAT_001049df,"battery_chg_add_debugfs");
  }
  return;
}



void battery_chg_notify_enable(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0;
  local_3c = 0;
  if (*(char *)(param_1 + 0x790) == '\0') {
    local_40 = 4;
    local_48 = 0x20000800a;
    iVar2 = battery_chg_write(param_1,(long)&local_48,0x1c);
    if (iVar2 < 0) {
      _printk(&DAT_00104a25,"battery_chg_notify_enable",iVar2);
    }
    else {
      *(undefined1 *)(param_1 + 0x790) = 1;
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void charger_notifier_event(undefined8 param_1,long param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  uint param3;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  char *local_c8;
  undefined8 uStack_c0;
  char local_b8 [8];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x638);
  lVar2 = power_supply_get_by_name("battery");
  if (lVar2 == 0) {
    _printk(&DAT_001035a9,"charger_notifier_event");
    iVar1 = -0x205;
    goto LAB_0010b1f4;
  }
  puVar3 = (undefined8 *)power_supply_get_drvdata();
  if (puVar3 == (undefined8 *)0x0) {
    iVar1 = -0x13;
    goto LAB_0010b1f4;
  }
  if (param_2 == 1) {
    *(undefined4 *)(puVar3 + 0x194) = *param_3;
    _printk(&DAT_00103a36,"charger_notifier_event","charger_notifier_event");
    param3 = *(uint *)(puVar3 + 0x194);
    local_c8 = local_b8;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    local_a4 = 0;
    uStack_a0 = 0;
    local_b8[0] = '\0';
    local_b8[1] = '\0';
    local_b8[2] = '\0';
    local_b8[3] = '\0';
    local_b8[4] = '\0';
    local_b8[5] = '\0';
    local_b8[6] = '\0';
    local_b8[7] = '\0';
    local_b0 = 0;
    local_ac = 0;
    uStack_c0 = 0;
    if ((0x3d < param3) || ((1L << ((ulong)param3 & 0x3f) & 0x2000000000004820U) == 0)) {
      param3 = 0;
    }
    if (param3 != xm_handle_smartchg_scene_upload_last_upload_scene) {
      local_d4 = 0;
      local_cc = 0;
      local_e0 = 0x10000800a;
      local_d8 = *(undefined4 *)((long)puVar3 + 0x1cc);
      iVar1 = battery_chg_write((long)puVar3,(long)&local_e0,0x18);
      if (iVar1 < 0) {
        puVar4 = &DAT_001064eb;
LAB_0010b3a4:
        _printk(puVar4,"xm_handle_smartchg_scene_upload",iVar1);
      }
      else if (*(int *)puVar3[0x38] == 1) {
        snprintf(local_b8,0x80,"MCA_SMARTCHG_SCENE=%d",param3);
        _printk(&DAT_00104ea6,"xm_handle_smartchg_scene_upload",local_b8);
        xm_handle_smartchg_scene_upload_last_upload_scene = param3;
        iVar1 = kobject_uevent_env(*puVar3,2,&local_c8);
        if (iVar1 < 0) {
          puVar4 = &DAT_00103855;
          goto LAB_0010b3a4;
        }
      }
    }
    uStack_a8 = 10;
    local_a4 = *(undefined4 *)(puVar3 + 0x194);
LAB_0010b340:
    local_ac = 0;
    local_b8[0] = '\n';
    local_b8[1] = -0x80;
    local_b8[2] = '\0';
    local_b8[3] = '\0';
    local_b8[4] = '\x01';
    local_b8[5] = '\0';
    local_b8[6] = '\0';
    local_b8[7] = '\0';
    local_b0 = *(undefined4 *)(puVar3 + 0x4c);
    iVar1 = battery_chg_write((long)puVar3,(long)local_b8,0x18);
    if (iVar1 < 0) goto LAB_0010b1f4;
  }
  else {
    if (param_2 == 0) {
      *(undefined4 *)((long)puVar3 + 0xc9c) = *param_3;
      _printk(&DAT_00103ff3,"charger_notifier_event","charger_notifier_event");
      local_a4 = *(undefined4 *)((long)puVar3 + 0xc9c);
      uStack_a8 = 9;
      goto LAB_0010b340;
    }
    _printk(&DAT_00105396,"charger_notifier_event","charger_notifier_event",param_2);
  }
  iVar1 = 0;
LAB_0010b1f4:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(iVar1);
  }
  return;
}



void get_charge_control_en(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x1900000000;
  local_38 = *(undefined4 *)(param_1 + 0x19c);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1,(long)&local_40,0x18);
  if (iVar2 < 0) {
    _printk(&DAT_00102ddd,"get_charge_control_en",iVar2);
  }
  else {
    *(bool *)(param_1 + 0x78c) = *(int *)(*(long *)(param_1 + 400) + 100) != 0;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



int usb_psy_set_icl(long param_1,undefined8 *param_2,uint param_3,int param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 local_60;
  undefined4 local_58;
  long local_54;
  int local_4c;
  long local_48;
  
  lVar1 = sp_el0;
  local_48 = *(long *)(lVar1 + 0x638);
  local_54 = 0x700000000;
  local_58 = *(undefined4 *)((long)param_2 + 0x24);
  local_4c = 0;
  local_60 = 0x10000800a;
  iVar2 = battery_chg_write(param_1,(long)&local_60,0x18);
  if (iVar2 < 0) {
    _printk(&DAT_00102a3f,"usb_psy_set_icl",iVar2);
  }
  else {
    iVar2 = -0x16;
    if ((*(uint *)(param_2[3] + 0x1c) < 7) &&
       ((1 << (ulong)(*(uint *)(param_2[3] + 0x1c) & 0x1f) & 0x4aU) != 0)) {
      if (param_4 < 0) {
        param_4 = -1;
      }
      local_60 = 0x10000800a;
      local_58 = *(undefined4 *)(param_2 + 5);
      local_54 = (ulong)param_3 << 0x20;
      local_4c = param_4;
      iVar2 = battery_chg_write(param_1,(long)&local_60,0x18);
      if (iVar2 < 0) {
        _printk(&DAT_00104049,"usb_psy_set_icl",param_4,iVar2);
      }
      else {
        iVar3 = strcmp((char *)**(undefined8 **)*param_2,"usb-2");
        if (iVar3 == 0) {
          *(int *)(param_1 + 0x780) = param_4;
        }
        else {
          *(int *)(param_1 + 0x77c) = param_4;
        }
      }
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_48) {
    return iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong usb_psy_get_prop(undefined8 *param_1,int param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar3 = sp_el0;
  local_48 = *(long *)(lVar3 + 0x638);
  lVar6 = power_supply_get_drvdata();
  iVar4 = strcmp(*(char **)*param_1,"usb-2");
  lVar3 = lVar6 + 0x1d8;
  if (iVar4 != 0) {
    lVar3 = lVar6 + 0x1a8;
  }
  *param_3 = -0x3d;
  lVar2 = 0x1d8;
  if (iVar4 != 0) {
    lVar2 = 0x1a8;
  }
  if (*(uint *)(lVar3 + 0x20) != 0) {
    uVar7 = 0;
    do {
      if (*(int *)(*(long *)(lVar3 + 0x10) + uVar7 * 4) == param_2) {
        if ((int)uVar7 < 0) goto LAB_0010b6d4;
        local_58 = *(undefined4 *)(lVar3 + 0x24);
        uStack_4c = 0;
        local_60 = 0x10000800a;
        uStack_54 = 0;
        local_50 = (int)uVar7;
        uVar5 = battery_chg_write(lVar6,(long)&local_60,0x18);
        if ((int)uVar5 < 0) {
          uVar7 = (ulong)uVar5;
          goto LAB_0010b6d4;
        }
        iVar4 = *(int *)(*(long *)(lVar3 + 0x18) + uVar7 * 4);
        *param_3 = iVar4;
        if (param_2 == 4) {
          if (iVar4 == 1) {
            if (*(char *)(lVar6 + 0xc99) != '\0') {
              uVar7 = 0;
              *param_3 = 0;
              goto LAB_0010b6d4;
            }
            if (*(char *)(lVar6 + 0x728) == '\0') {
              queue_delayed_work_on(0x20,_system_wq,lVar6 + 0x370,0x4e2);
            }
          }
        }
        else if (param_2 == 0x34) {
          iVar1 = -5;
          if (0 < iVar4) {
            iVar1 = 5;
          }
          uVar7 = 0;
          *param_3 = (iVar1 + iVar4) / 10;
          goto LAB_0010b6d4;
        }
        uVar7 = 0;
        goto LAB_0010b6d4;
      }
      uVar7 = uVar7 + 1;
    } while (*(uint *)(lVar3 + 0x20) != uVar7);
  }
  if (*(undefined8 **)(lVar6 + lVar2) != (undefined8 *)0x0) {
    _printk(&DAT_0010418f,"get_property_id",param_2,*(undefined8 *)**(undefined8 **)(lVar6 + lVar2))
    ;
  }
  uVar7 = 0xfffffffe;
LAB_0010b6d4:
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x638) == local_48) {
    return uVar7 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



ulong usb_psy_set_prop(undefined8 *param_1,int param_2,int *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = power_supply_get_drvdata();
  iVar3 = strcmp(*(char **)*param_1,"usb-2");
  puVar1 = (undefined8 *)(lVar5 + 0x1d8);
  if (iVar3 != 0) {
    puVar1 = (undefined8 *)(lVar5 + 0x1a8);
  }
  lVar2 = 0x1d8;
  if (iVar3 != 0) {
    lVar2 = 0x1a8;
  }
  if (*(uint *)(puVar1 + 4) != 0) {
    uVar6 = 0;
    do {
      if (*(int *)(puVar1[2] + uVar6 * 4) == param_2) {
        if (-1 < (int)(uint)uVar6) {
          if (param_2 == 0x26) {
            uVar4 = usb_psy_set_icl(lVar5,puVar1,(uint)uVar6,*param_3);
            uVar6 = (ulong)uVar4;
          }
          else {
            uVar6 = 0;
          }
        }
        goto LAB_0010b88c;
      }
      uVar6 = uVar6 + 1;
    } while (*(uint *)(puVar1 + 4) != uVar6);
  }
  if (*(undefined8 **)(lVar5 + lVar2) != (undefined8 *)0x0) {
    _printk(&DAT_0010418f,"get_property_id",param_2,*(undefined8 *)**(undefined8 **)(lVar5 + lVar2))
    ;
  }
  uVar6 = 0xfffffffe;
LAB_0010b88c:
  return uVar6 & 0xffffffff;
}



bool usb_psy_prop_is_writeable(undefined8 param_1,int param_2)

{
  return param_2 == 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong wls_psy_get_prop(undefined8 param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  int iStack_40;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  lVar3 = power_supply_get_drvdata();
  *param_3 = -0x3d;
  if (param_2 == 3) {
    uVar4 = 0;
    *param_3 = *(int *)(lVar3 + 0x798);
  }
  else {
    if (*(uint *)(lVar3 + 0x228) != 0) {
      uVar4 = 0;
      do {
        if (*(int *)(*(long *)(lVar3 + 0x218) + uVar4 * 4) == param_2) {
          if (-1 < (int)uVar4) {
            local_44 = 0;
            local_3c = 0;
            local_50 = 0x10000800a;
            local_48 = *(undefined4 *)(lVar3 + 0x22c);
            iStack_40 = (int)uVar4;
            uVar2 = battery_chg_write(lVar3,(long)&local_50,0x18);
            if ((int)uVar2 < 0) {
              uVar4 = (ulong)uVar2;
            }
            else {
              iVar1 = *(int *)(*(long *)(lVar3 + 0x220) + uVar4 * 4);
              uVar4 = 0;
              *param_3 = iVar1;
              if ((param_2 == 4) && (iVar1 == 1)) {
                if (*(char *)(lVar3 + 0xc99) == '\0') {
                  if (*(char *)(lVar3 + 0x728) == '\0') {
                    queue_delayed_work_on(0x20,_system_wq,lVar3 + 0x370,0x4e2);
                  }
                  uVar4 = 0;
                }
                else {
                  uVar4 = 0;
                  *param_3 = 0;
                }
              }
            }
          }
          goto LAB_0010b98c;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(lVar3 + 0x228) != uVar4);
    }
    if (*(undefined8 **)(lVar3 + 0x208) != (undefined8 *)0x0) {
      _printk(&DAT_0010418f,"get_property_id",param_2,
              *(undefined8 *)**(undefined8 **)(lVar3 + 0x208));
    }
    uVar4 = 0xfffffffe;
  }
LAB_0010b98c:
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x638) == local_38) {
    return uVar4 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void screen_state_for_charge_callback(int param_1,int *param_2,long param_3)

{
  if ((param_2 != (int *)0x0) && ((char)param_2[3] == '\0')) {
    if (param_1 == 2) {
      if (*param_2 == 2) {
        *(undefined4 *)(param_3 + 0xc94) = 0;
      }
      else {
        if (*param_2 != 1) {
          return;
        }
        *(undefined4 *)(param_3 + 0xc94) = 1;
      }
    }
    else {
      if (param_1 != 1) {
        return;
      }
      if (*param_2 == 2) {
        *(undefined4 *)(param_3 + 0xc90) = 0;
      }
      else {
        if (*param_2 != 1) {
          return;
        }
        *(undefined4 *)(param_3 + 0xc90) = 1;
      }
    }
    queue_work_on(0x20,_system_wq,param_3 + 0x340);
  }
  return;
}



long shipmode_count_reset_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x7900000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x1e4));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long afp_temp_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x7d00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,*(undefined4 *)(*(long *)(param_1 + 0x248) + 500)
                     );
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



ulong battery_psy_get_prop(undefined8 param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 local_60;
  undefined4 local_58;
  long local_54;
  undefined4 local_4c;
  long local_48;
  
  lVar4 = sp_el0;
  local_48 = *(long *)(lVar4 + 0x638);
  lVar4 = power_supply_get_drvdata();
  iVar3 = 0x3f;
  if (param_2 != 0x3e) {
    iVar3 = param_2;
  }
  *param_3 = 0xffffffc3;
  if (*(uint *)(lVar4 + 0x198) != 0) {
    uVar8 = 0;
    do {
      if (*(int *)(*(long *)(lVar4 + 0x188) + uVar8 * 4) == iVar3) {
        if ((int)uVar8 < 0) {
          uVar6 = uVar8 & 0xffffffff;
          goto LAB_0010bcec;
        }
        local_58 = *(undefined4 *)(lVar4 + 0x19c);
        local_4c = 0;
        local_60 = 0x10000800a;
        local_54 = uVar8 << 0x20;
        uVar2 = battery_chg_write(lVar4,(long)&local_60,0x18);
        uVar6 = (ulong)uVar2;
        if ((int)uVar2 < 0) goto LAB_0010bcec;
        switch(iVar3) {
        case 0x21:
          uVar2 = *(uint *)(lVar4 + 0x290);
          break;
        case 0x22:
          uVar2 = *(uint *)(lVar4 + 0x29c);
          break;
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x3f:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
switchD_0010bd74_caseD_23:
          uVar2 = *(uint *)(*(long *)(lVar4 + 400) + uVar8 * 4);
          break;
        case 0x2f:
          uVar7 = *(uint *)(*(long *)(lVar4 + 400) + uVar8 * 4);
          uVar2 = uVar7 / 100;
          *param_3 = uVar7 / 100;
          if (99 < uVar7) {
            *(uint *)(lVar4 + 0x2a4) = uVar7 / 100;
            uVar2 = *param_3;
          }
          if (uVar2 == 0) {
            lVar5 = power_supply_get_drvdata(param_1);
            local_54 = 0x700000000;
            local_58 = *(undefined4 *)(lVar5 + 0x19c);
            local_4c = 0;
            local_60 = 0x10000800a;
            iVar3 = battery_chg_write(lVar5,(long)&local_60,0x18);
            if (iVar3 < 0) {
              _printk(&DAT_001063a8,"check_batt_capacity_whether_glink_timeout",iVar3);
              uVar7 = 0xe74;
            }
            else {
              uVar2 = *(uint *)(*(long *)(lVar5 + 400) + 0x1c);
              uVar7 = uVar2 / 1000;
              _printk(&DAT_001051b9,"check_batt_capacity_whether_glink_timeout",(ulong)uVar2 / 1000)
              ;
            }
            if ((*(int *)(lVar5 + 0x2a0) + 0x32 < (int)uVar7) && (*(char *)(lVar5 + 0xc9a) != '\0'))
            {
              *param_3 = *(uint *)(lVar4 + 0x2a4);
            }
          }
          uVar2 = *(uint *)(lVar4 + 0x72c);
          if (100 < uVar2) goto LAB_0010bcec;
          break;
        case 0x34:
          iVar1 = *(int *)(*(long *)(lVar4 + 400) + uVar8 * 4);
          iVar3 = -5;
          if (0 < iVar1) {
            iVar3 = 5;
          }
          uVar2 = (iVar3 + iVar1) / 10;
          break;
        case 0x49:
          *(undefined8 *)param_3 = *(undefined8 *)(lVar4 + 0x180);
          goto LAB_0010bcec;
        default:
          if (iVar3 != 0) goto switchD_0010bd74_caseD_23;
          uVar2 = *(uint *)(*(long *)(lVar4 + 400) + uVar8 * 4);
          *param_3 = uVar2;
          if (((uVar2 != 1) || (*(char *)(lVar4 + 0xc99) == '\0')) && (*(byte *)(lVar4 + 0x78b) < 4)
             ) goto LAB_0010bcec;
          uVar2 = 2;
        }
        *param_3 = uVar2;
        goto LAB_0010bcec;
      }
      uVar8 = uVar8 + 1;
    } while (*(uint *)(lVar4 + 0x198) != uVar8);
  }
  if (*(undefined8 **)(lVar4 + 0x178) != (undefined8 *)0x0) {
    _printk(&DAT_0010418f,"get_property_id",iVar3,*(undefined8 *)**(undefined8 **)(lVar4 + 0x178));
  }
  uVar6 = 0xfffffffe;
LAB_0010bcec:
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x638) != local_48) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar6;
}



ulong battery_psy_set_prop(undefined8 param_1,int param_2,uint *param_3)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 local_60;
  ulong local_58;
  uint local_50;
  uint uStack_4c;
  long local_48;
  
  lVar2 = sp_el0;
  local_48 = *(long *)(lVar2 + 0x638);
  uVar5 = power_supply_get_drvdata();
  if (*(uint *)(uVar5 + 0x198) != 0) {
    uVar10 = 0;
    do {
      if (*(int *)(*(long *)(uVar5 + 0x188) + uVar10 * 4) == param_2) {
        uVar7 = uVar5;
        if ((int)(uint)uVar10 < 0) {
          uVar9 = uVar10 & 0xffffffff;
          goto switchD_0010bff8_caseD_1e;
        }
        uVar9 = 0xffffffea;
        switch(param_2) {
        case 0x1d:
          uVar3 = *param_3;
          _printk(&DAT_00104b8d,"battery_psy_set_fcc",uVar3);
          if ((int)uVar3 < 0) {
            uVar3 = 0xffffffff;
          }
          local_60 = 0x10000800a;
          local_58 = (ulong)*(uint *)(uVar5 + 0x1a0);
          local_50 = (uint)uVar10;
          uStack_4c = uVar3;
          uVar3 = battery_chg_write(uVar5,(long)&local_60,0x18);
          uVar7 = (ulong)uVar3;
          uVar9 = 0;
        default:
          goto switchD_0010bff8_caseD_1e;
        case 0x21:
          uVar3 = battery_psy_set_charge_current(uVar5,*param_3);
          uVar7 = (ulong)uVar3;
          uVar9 = uVar7;
          goto switchD_0010bff8_caseD_1e;
        case 0x23:
          goto switchD_0010bff8_caseD_23;
        case 0x24:
          uVar3 = *param_3;
          if (uVar3 - 0x65 < 0xffffffd2) {
            uVar7 = _printk(&DAT_00105949,"battery_psy_set_charge_end_threshold",0x37,100);
          }
          else {
            if (*(char *)(uVar5 + 0x78c) == '\0') {
              uVar9 = 0;
            }
            else {
              uVar4 = (uint)*(byte *)(uVar5 + 0x789);
              uStack_4c = uVar3 - uVar4;
              if ((uVar3 < uVar4 || uStack_4c == 0) || uVar4 == 0) {
                uStack_4c = 5;
              }
              local_60 = 0x10000800a;
              local_58 = 0x100000048;
              local_50 = uVar3;
              uVar4 = battery_chg_write(uVar5,(long)&local_60,0x18);
              uVar9 = (ulong)uVar4;
              uVar7 = uVar9;
              if ((int)uVar4 < 0) {
                _printk(&DAT_001034bc,"battery_psy_set_charge_threshold",uVar9);
                puVar6 = &DAT_00104893;
                pcVar8 = "battery_psy_set_charge_end_threshold";
                goto LAB_0010c134;
              }
            }
            *(char *)(uVar5 + 0x78a) = (char)uVar3;
          }
          goto switchD_0010bff8_caseD_1e;
        }
      }
      uVar10 = uVar10 + 1;
    } while (*(uint *)(uVar5 + 0x198) != uVar10);
  }
  if (*(undefined8 **)(uVar5 + 0x178) != (undefined8 *)0x0) {
    uVar5 = _printk(&DAT_0010418f,"get_property_id",param_2,
                    *(undefined8 *)**(undefined8 **)(uVar5 + 0x178));
  }
  uVar7 = uVar5;
  uVar9 = 0xfffffffe;
switchD_0010bff8_caseD_1e:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x638) == local_48) {
    return uVar9;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar7);
switchD_0010bff8_caseD_23:
  uVar3 = *param_3;
  if (uVar3 - 0x60 < 0xffffffd2) {
    uVar7 = _printk(&DAT_00104673,"battery_psy_set_charge_start_threshold",0x32,0x5f);
    goto switchD_0010bff8_caseD_1e;
  }
  if (*(char *)(uVar5 + 0x78c) == '\0') {
    uVar9 = 0;
  }
  else {
    bVar1 = *(byte *)(uVar5 + 0x78a);
    local_50 = uVar3 + 5;
    uVar4 = (uint)bVar1;
    if (uVar3 <= uVar4) {
      local_50 = (uint)bVar1;
    }
    uStack_4c = 5;
    if (uVar3 <= uVar4) {
      uStack_4c = uVar4 - uVar3;
    }
    if (99 < local_50) {
      local_50 = 100;
    }
    local_60 = 0x10000800a;
    local_58 = 0x100000048;
    uVar4 = battery_chg_write(uVar5,(long)&local_60,0x18);
    uVar9 = (ulong)uVar4;
    uVar7 = uVar9;
    if ((int)uVar4 < 0) {
      _printk(&DAT_001034bc,"battery_psy_set_charge_threshold",uVar9);
      puVar6 = &DAT_00103c8c;
      pcVar8 = "battery_psy_set_charge_start_threshold";
LAB_0010c134:
      uVar7 = _printk(puVar6,pcVar8,uVar3,uVar9);
      goto switchD_0010bff8_caseD_1e;
    }
  }
  *(char *)(uVar5 + 0x789) = (char)uVar3;
  goto switchD_0010bff8_caseD_1e;
}



undefined4 battery_psy_prop_is_writeable(undefined8 param_1,int param_2)

{
  if (param_2 - 0x1dU < 8) {
    return *(undefined4 *)(&DAT_00106eb0 + (long)(int)(param_2 - 0x1dU) * 4);
  }
  return 0;
}



int battery_psy_set_charge_current(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  int local_3c;
  long local_38;
  
  lVar7 = sp_el0;
  local_38 = *(long *)(lVar7 + 0x638);
  iVar1 = *(int *)(param_1 + 0x29c);
  if (iVar1 == 0) {
    iVar5 = 0;
    goto LAB_0010c30c;
  }
  if (iVar1 < 0) {
    _printk(&DAT_00103c5b,"battery_psy_set_charge_current");
    iVar5 = -0x16;
    goto LAB_0010c30c;
  }
  iVar5 = -0x16;
  if ((param_2 < 0) || (iVar1 < param_2)) goto LAB_0010c30c;
  local_48 = *(undefined4 *)(param_1 + 0x1a0);
  local_44 = 0xa00000000;
  local_50 = 0x10000800a;
  local_3c = param_2;
  iVar5 = battery_chg_write(param_1,(long)&local_50,0x18);
  if (iVar5 < 0) {
    _printk(&DAT_00105d1a,"battery_psy_set_charge_current",param_2,iVar5);
  }
  lVar7 = *(long *)(param_1 + 0x250);
  *(int *)(param_1 + 0x290) = param_2;
  uVar2 = *(uint *)(lVar7 + 0x20);
  uVar8 = (ulong)uVar2;
  uVar3 = uVar2 - 0x80;
  if (uVar3 < 5) {
    ppuVar9 = &qc_power_supply_usb_type_text + uVar3;
    uVar10 = 0x28;
    uVar8 = (ulong)uVar3;
LAB_0010c370:
    if (uVar10 <= uVar8 * 8) {
                    // WARNING: Does not return
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10c3b4);
      (*pcVar4)();
    }
    pcVar6 = *ppuVar9;
  }
  else {
    if (uVar2 < 10) {
      ppuVar9 = &power_supply_usb_type_text + uVar8;
      uVar10 = 0x50;
      goto LAB_0010c370;
    }
    pcVar6 = "Unknown";
  }
  _printk(&DAT_001051de,"battery_psy_set_charge_current",pcVar6,param_2,
          *(undefined4 *)(lVar7 + 0xd8),*(undefined4 *)(lVar7 + 0x7c));
LAB_0010c30c:
  lVar7 = sp_el0;
  if (*(long *)(lVar7 + 0x638) == local_38) {
    return iVar5;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined8 power_supply_read_temp(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != 0) {
    lVar4 = power_supply_get_drvdata(*(undefined8 *)(param_1 + 0x3f0));
    lVar5 = ktime_get();
    lVar2 = power_supply_read_temp_last_read_time;
    iVar1 = *(int *)(*(long *)(lVar4 + 0x250) + 0x1cc);
    power_supply_read_temp_last_read_time = lVar5;
    *param_2 = iVar1 * 100;
    if (iVar1 != power_supply_read_temp_last_temp) {
      power_supply_read_temp_last_temp = iVar1;
      _printk(&DAT_00105bcd,"power_supply_read_temp",iVar1,(lVar5 - lVar2) / 1000000,0);
    }
    return 0;
  }
                    // WARNING: Does not return
  pcVar3 = (code *)SoftwareBreakpoint(0x800,0x10c468);
  (*pcVar3)();
}



undefined8 wls_psy_set_prop(void)

{
  return 0;
}



undefined8 wls_psy_prop_is_writeable(void)

{
  return 0;
}



long soh_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x500000000;
  local_38 = *(undefined4 *)(param_1 + 0x194);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x188) + 0x14));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long resistance_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x1600000000;
  local_38 = *(undefined4 *)(param_1 + 0x194);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x188) + 0x58));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long moisture_detection_status_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x900000000;
  local_38 = *(undefined4 *)(param_1 + 0x1c4);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00106452,
                      *(undefined4 *)(*(long *)(param_1 + 0x1b8) + 0x24));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long moisture_detection_usb_2_status_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x900000000;
  local_38 = *(undefined4 *)(param_1 + 500);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x1e8) + 0x24));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long moisture_detection_en_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x800000000;
  local_38 = *(undefined4 *)(param_1 + 0x1c4);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x1b8) + 0x20));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void moisture_detection_en_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte local_44 [4];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  uint local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44[0] = 0;
  iVar2 = kstrtobool(param_3,local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 0x1c8);
    local_34 = 0x800000000;
    local_2c = (uint)local_44[0];
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long moisture_detection_usb_2_en_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x800000000;
  local_38 = *(undefined4 *)(param_1 + 500);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x1e8) + 0x20));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void moisture_detection_usb_2_en_store
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte local_44 [4];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  uint local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44[0] = 0;
  iVar2 = kstrtobool(param_3,local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 0x1f8);
    local_34 = 0x800000000;
    local_2c = (uint)local_44[0];
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long wireless_boost_en_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x600000000;
  local_38 = *(undefined4 *)(param_1 + 0x224);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x218) + 0x18));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void wireless_boost_en_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte local_44 [4];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  uint local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44[0] = 0;
  iVar2 = kstrtobool(param_3,local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 0x228);
    local_34 = 0x600000000;
    local_2c = (uint)local_44[0];
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long fake_soc_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = scnprintf(param_3,0x1000,&DAT_001036d3,*(undefined4 *)(param_1 + 0x724));
  return (long)iVar1;
}



undefined8 fake_soc_store(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_2c = 0;
  iVar2 = kstrtoint(param_3,0,&local_2c);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x724) = local_2c;
    if (*(long *)(param_1 + 0x170) != 0) {
      power_supply_changed();
    }
  }
  else {
    param_4 = 0xffffffffffffffea;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return param_4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void wireless_fw_update_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char local_2c [4];
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_2c[0] = '\0';
  iVar2 = kstrtobool(param_3,local_2c);
  lVar3 = -0x16;
  if ((iVar2 == 0) && (local_2c[0] != '\0')) {
    iVar2 = wireless_fw_update((undefined8 *)(param_1 + -8),0);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



int wireless_fw_update(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar7 = sp_el0;
  local_38 = *(long *)(lVar7 + 0x638);
  local_58 = (ulong *)0x0;
  if (param_1[0x51] == 0) {
    _printk(&DAT_00106031,"wireless_fw_update");
    iVar3 = -0x16;
    goto LAB_0010ce00;
  }
  pm_stay_awake(*param_1);
  local_48 = *(undefined4 *)((long)param_1 + 0x1cc);
  local_44 = 0;
  local_3c = 0;
  local_50 = 0x10000800a;
  iVar3 = battery_chg_write((long)param_1,(long)&local_50,0x18);
  if (-1 < iVar3) {
    if ((*(char *)((long)param_1 + 0xcc1) == '\0') || (*(int *)param_1[0x38] != 0)) {
      lVar7 = 1;
    }
    else {
      local_48 = *(undefined4 *)((long)param_1 + 0x1fc);
      local_44 = 0;
      local_3c = 0;
      local_50 = 0x10000800a;
      iVar3 = battery_chg_write((long)param_1,(long)&local_50,0x18);
      if (iVar3 < 0) goto LAB_0010cdf8;
      lVar7 = 2;
    }
    if (*(int *)param_1[lVar7 * 6 + 0x32] == 0) {
      local_48 = *(undefined4 *)((long)param_1 + 0x19c);
      local_3c = 0;
      local_44 = 0x400000000;
      local_50 = 0x10000800a;
      iVar3 = battery_chg_write((long)param_1,(long)&local_50,0x18);
      if (-1 < iVar3) {
        if (0x270 < *(uint *)(param_1[0x32] + 0x10) >> 3) goto LAB_0010ce4c;
        _printk(&DAT_0010286d,"wireless_fw_update");
        iVar3 = -0x16;
      }
    }
    else {
LAB_0010ce4c:
      iVar3 = firmware_request_nowarn(&local_58,param_1[0x51],*param_1);
      if (iVar3 == 0) {
        if (((local_58 == (ulong *)0x0) || (uVar9 = local_58[1], uVar9 == 0)) ||
           (uVar8 = *local_58, uVar8 == 0)) {
          _printk(&DAT_0010521c,"wireless_fw_update");
LAB_0010ce8c:
          iVar3 = -0x16;
        }
        else {
          if (uVar8 >> 0xe == 0) {
            _printk(&DAT_00103cd7,"wireless_fw_update",uVar8);
            goto LAB_0010ce8c;
          }
          pcVar4 = strstr((char *)param_1[0x51],"9412");
          lVar7 = 0x86;
          if (pcVar4 != (char *)0x0) {
            lVar7 = 0x96;
          }
          lVar1 = 0x84;
          if (pcVar4 != (char *)0x0) {
            lVar1 = 0x94;
          }
          uVar2 = CONCAT22(*(undefined2 *)(uVar9 + lVar1),*(undefined2 *)(uVar9 + lVar7));
          if ((param_2 & 1) != 0) {
            uVar2 = 0xffffffff;
          }
          iVar3 = wireless_fw_check_for_update((long)param_1,uVar2,(int)uVar8);
          if (iVar3 < 0) {
            puVar5 = &DAT_00105241;
LAB_0010cf40:
            _printk(puVar5,"wireless_fw_update",iVar3);
          }
          else if (*(char *)((long)param_1 + 0x733) == '\0') {
            _printk(&DAT_00105d66,"wireless_fw_update");
          }
          else {
            msleep(1000);
            *(undefined4 *)(param_1 + 0x2b) = 0;
            iVar3 = wireless_fw_send_firmware((long)param_1,local_58);
            if (iVar3 < 0) {
              puVar5 = &DAT_001028e8;
              goto LAB_0010cf40;
            }
            uVar6 = __msecs_to_jiffies(*(undefined4 *)((long)param_1 + 0x73c));
            iVar3 = wait_for_completion_timeout(param_1 + 0x2b,uVar6);
            if (iVar3 == 0) {
              _printk(&DAT_00103e76,"wireless_fw_update");
              iVar3 = -0x6e;
            }
            else {
              _printk(&DAT_001034ff,"wireless_fw_update");
              iVar3 = 0;
            }
          }
        }
        *(undefined2 *)(param_1 + 0xe7) = 0;
        release_firmware(local_58);
      }
      else {
        _printk(&DAT_001028b8,"wireless_fw_update",iVar3);
      }
    }
  }
LAB_0010cdf8:
  pm_relax(*param_1);
LAB_0010ce00:
  lVar7 = sp_el0;
  if (*(long *)(lVar7 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar3;
}



void wireless_fw_check_for_update(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  uint uStack_1c;
  long local_18;
  
  lVar1 = sp_el0;
  local_18 = *(long *)(lVar1 + 0x638);
  local_28 = 0x40;
  *(undefined1 *)(param_1 + 0x733) = 0;
  local_30 = 0x10000800a;
  uStack_1c = (uint)*(ushort *)(param_1 + 0x738);
  uStack_24 = param_2;
  local_20 = param_3;
  iVar2 = battery_chg_write(param_1,(long)&local_30,0x18);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_18) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(iVar2);
}



int wireless_fw_send_firmware(long param_1,ulong *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 *__src;
  ulong uVar4;
  int iVar5;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  int local_6c;
  long local_68;
  
  lVar1 = sp_el0;
  local_68 = *(long *)(lVar1 + 0x638);
  uVar4 = *param_2;
  local_74 = 0;
  local_7c = 0;
  local_84 = 0;
  local_8c = 0;
  local_94 = 0;
  local_9c = 0;
  local_a4 = 0;
  local_ac = 0;
  local_b4 = 0;
  local_bc = 0;
  local_c4 = 0;
  local_cc = 0;
  local_d4 = 0;
  local_dc = 0;
  local_e4 = 0;
  local_ec = 0;
  iVar3 = (int)(uVar4 >> 7);
  if (iVar3 == 0) {
    iVar2 = -0x16;
    goto LAB_0010d270;
  }
  iVar5 = 0;
  __src = (undefined8 *)param_2[1];
  lVar1 = param_1 + 0xd8;
  local_f8 = 0x10000800a;
  local_f0 = 0x41;
  do {
    iVar5 = iVar5 + 1;
    local_dc = __src[2];
    local_d4 = __src[3];
    local_ec = *__src;
    local_e4 = __src[1];
    local_bc = __src[6];
    local_b4 = __src[7];
    local_cc = __src[4];
    local_c4 = __src[5];
    local_9c = __src[10];
    local_94 = __src[0xb];
    local_ac = __src[8];
    local_a4 = __src[9];
    local_7c = __src[0xe];
    local_74 = __src[0xf];
    local_8c = __src[0xc];
    local_84 = __src[0xd];
    local_6c = iVar5;
    down_read(lVar1);
    if ((int)*(undefined8 *)(param_1 + 0x2ac) == 0) goto LAB_0010d244;
    *(undefined4 *)(param_1 + 0x138) = 0;
    iVar2 = pmic_glink_write(*(undefined8 *)(param_1 + 0xa0),&local_f8,0x90);
    if (iVar2 == 0) {
      iVar2 = wait_for_completion_timeout(param_1 + 0x138,0x7d);
      if (iVar2 == 0) goto LAB_0010d2ac;
      up_read(lVar1);
    }
    else {
      up_read(lVar1);
      if (iVar2 < 0) goto LAB_0010d270;
    }
    __src = __src + 0x10;
  } while (iVar3 != iVar5);
  uVar4 = uVar4 & 0x7f;
  if (uVar4 != 0) {
    local_6c = iVar3 + 1;
    local_ec = 0;
    local_e4 = 0;
    local_dc = 0;
    local_d4 = 0;
    local_cc = 0;
    local_c4 = 0;
    local_bc = 0;
    local_b4 = 0;
    local_ac = 0;
    local_a4 = 0;
    local_9c = 0;
    local_94 = 0;
    local_8c = 0;
    local_84 = 0;
    local_7c = 0;
    local_74 = 0;
    memcpy(&local_ec,__src,uVar4);
    down_read(lVar1);
    if ((int)*(undefined8 *)(param_1 + 0x2ac) == 0) {
LAB_0010d244:
      iVar2 = -0x6b;
LAB_0010d248:
      up_read(lVar1);
      goto LAB_0010d270;
    }
    *(undefined4 *)(param_1 + 0x138) = 0;
    iVar2 = pmic_glink_write(*(undefined8 *)(param_1 + 0xa0),&local_f8,0x90);
    if (iVar2 == 0) {
      iVar3 = wait_for_completion_timeout(param_1 + 0x138,0x7d);
      if (iVar3 == 0) {
LAB_0010d2ac:
        _printk(&DAT_0010291b,"battery_chg_fw_write");
        iVar2 = -0x6e;
        goto LAB_0010d248;
      }
      up_read(lVar1);
    }
    else {
      up_read(lVar1);
      if (iVar2 < 0) goto LAB_0010d270;
    }
  }
  iVar2 = 0;
LAB_0010d270:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_68) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar2;
}



void wireless_fw_force_update_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char local_2c [4];
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_2c[0] = '\0';
  iVar2 = kstrtobool(param_3,local_2c);
  lVar3 = -0x16;
  if ((iVar2 == 0) && (local_2c[0] != '\0')) {
    iVar2 = wireless_fw_update((undefined8 *)(param_1 + -8),1);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long wireless_fw_version_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x638);
  local_48 = 0x10000800a;
  local_40 = 0x44;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_48,0xc);
  if (iVar2 < 0) {
    _printk(&DAT_001036d7,"wireless_fw_version_show",iVar2);
  }
  else {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00105497,*(undefined4 *)(param_1 + 0x72c));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_38) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void wireless_fw_crc_store(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  short local_2c [2];
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_2c[0] = 0;
  iVar2 = kstrtou16(param_3,0,local_2c);
  uVar3 = 0xffffffffffffffea;
  if ((iVar2 == 0) && (local_2c[0] != 0)) {
    *(short *)(param_1 + 0x730) = local_2c[0];
    uVar3 = param_4;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar3);
}



long wireless_fw_update_time_ms_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = scnprintf(param_3,0x1000,&DAT_001036d3,*(undefined4 *)(param_1 + 0x734));
  return (long)iVar1;
}



undefined8
wireless_fw_update_time_ms_store
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = kstrtouint(param_3,0,param_1 + 0x734);
  if (iVar1 != 0) {
    param_4 = 0xffffffffffffffea;
  }
  return param_4;
}



long wireless_type_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = sp_el0;
  local_28 = *(long *)(lVar2 + 0x638);
  local_34 = 0x900000000;
  local_38 = *(undefined4 *)(param_1 + 0x224);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar3 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar3) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x218) + 0x24);
    if (uVar1 < 4) {
      pcVar4 = (&qc_power_supply_wls_type_text)[uVar1];
    }
    else {
      pcVar4 = "Unknown";
    }
    iVar3 = scnprintf(param_3,0x1000,&DAT_00105295,pcVar4);
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x638) == local_28) {
    return (long)iVar3;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long ship_mode_en_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = scnprintf(param_3,0x1000,&DAT_001036d3,*(undefined1 *)(param_1 + 0x729));
  return (long)iVar1;
}



undefined8 ship_mode_en_store(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  iVar2 = kstrtobool(param_3,param_1 + 0x729);
  if (iVar2 == 0) {
    local_38 = 0x10000800a;
    uStack_30 = 0x36;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_38,0x10);
    if (iVar2 < 0) {
      _printk(&DAT_00102f39,"ship_mode_en_store",iVar2);
    }
  }
  else {
    param_4 = 0xffffffffffffffea;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return param_4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long restrict_chg_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = scnprintf(param_3,0x1000,&DAT_001036d3,*(undefined1 *)(param_1 + 0x780));
  return (long)iVar1;
}



void restrict_chg_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  char local_54 [4];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  uint local_3c;
  long local_38;
  
  lVar4 = sp_el0;
  local_38 = *(long *)(lVar4 + 0x638);
  local_54[0] = '\0';
  iVar3 = kstrtobool(param_3,local_54);
  if (iVar3 == 0) {
    *(char *)(param_1 + 0x780) = local_54[0];
    lVar4 = 0x768;
    if (local_54[0] != '\0') {
      lVar4 = 0x76c;
    }
    uVar5 = *(uint *)(param_1 + lVar4);
    if (local_54[0] != '\0') {
      uVar1 = *(uint *)(param_1 + 0x76c);
      if (uVar5 <= *(uint *)(param_1 + 0x76c)) {
        uVar1 = uVar5;
      }
      uVar5 = uVar1;
      if (*(uint *)(param_1 + 0x768) <= uVar1) {
        uVar5 = *(uint *)(param_1 + 0x768);
      }
    }
    local_48 = *(undefined4 *)(param_1 + 0x198);
    local_44 = 0xa00000000;
    local_50 = 0x10000800a;
    local_3c = uVar5;
    iVar3 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    if (iVar3 < 0) {
      _printk(&DAT_00105f53,"__battery_psy_set_charge_current",uVar5,iVar3);
    }
    else {
      *(uint *)(param_1 + 0x770) = uVar5;
    }
    lVar4 = (long)iVar3;
    if (-1 < iVar3) {
      lVar4 = param_4;
    }
  }
  else {
    lVar4 = -0x16;
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar4);
  }
  return;
}



long restrict_cur_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = scnprintf(param_3,0x1000,&DAT_001036d3,*(undefined4 *)(param_1 + 0x76c));
  return (long)iVar1;
}



long restrict_cur_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  uint local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  uint local_4c;
  long local_48;
  
  lVar4 = sp_el0;
  local_48 = *(long *)(lVar4 + 0x638);
  local_64 = 0;
  iVar5 = kstrtouint(param_3,0,&local_64);
  if (iVar5 == 0) {
    uVar2 = *(uint *)(param_1 + 0x768);
    if (local_64 <= uVar2) {
      uVar3 = *(undefined4 *)(param_1 + 0x76c);
      *(uint *)(param_1 + 0x76c) = local_64;
      if (*(char *)(param_1 + 0x780) != '\0') {
        uVar1 = local_64;
        if (uVar2 <= local_64) {
          uVar1 = uVar2;
        }
        local_58 = *(undefined4 *)(param_1 + 0x198);
        local_54 = 0xa00000000;
        local_60 = 0x10000800a;
        local_4c = uVar1;
        iVar5 = battery_chg_write(param_1 + -8,(long)&local_60,0x18);
        if (iVar5 < 0) {
          _printk(&DAT_00105f53,"__battery_psy_set_charge_current",uVar1,iVar5);
          param_4 = (long)iVar5;
          *(undefined4 *)(param_1 + 0x76c) = uVar3;
        }
        else {
          *(uint *)(param_1 + 0x770) = uVar1;
        }
      }
      goto LAB_0010d8f4;
    }
  }
  param_4 = -0x16;
LAB_0010d8f4:
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x638) == local_48) {
    return param_4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long usb_real_type_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  char *pcVar6;
  undefined **ppuVar7;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_34 = 0xb00000000;
  local_38 = *(undefined4 *)(param_1 + 0x1c4);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar5 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (iVar5 < 0) goto LAB_0010da84;
  uVar1 = *(uint *)(*(long *)(param_1 + 0x1b8) + 0x2c);
  uVar2 = uVar1 - 0x80;
  if (uVar2 < 5) {
    ppuVar7 = &qc_power_supply_usb_type_text + uVar2;
    if (0x27 < (ulong)uVar2 * 8) {
LAB_0010da64:
                    // WARNING: Does not return
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10da68);
      (*pcVar4)();
    }
LAB_0010da3c:
    pcVar6 = *ppuVar7;
  }
  else {
    if (uVar1 < 10) {
      ppuVar7 = &power_supply_usb_type_text + uVar1;
      if (0x4f < (ulong)uVar1 * 8) goto LAB_0010da64;
      goto LAB_0010da3c;
    }
    pcVar6 = "Unknown";
  }
  iVar5 = scnprintf(param_3,0x1000,&DAT_00105295,pcVar6);
LAB_0010da84:
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x638) == local_28) {
    return (long)iVar5;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long usb_2_real_type_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  char *pcVar6;
  undefined **ppuVar7;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_34 = 0xb00000000;
  local_38 = *(undefined4 *)(param_1 + 500);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar5 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (iVar5 < 0) goto LAB_0010db8c;
  uVar1 = *(uint *)(*(long *)(param_1 + 0x1e8) + 0x2c);
  uVar2 = uVar1 - 0x80;
  if (uVar2 < 5) {
    ppuVar7 = &qc_power_supply_usb_type_text + uVar2;
    if (0x27 < (ulong)uVar2 * 8) {
LAB_0010db6c:
                    // WARNING: Does not return
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10db70);
      (*pcVar4)();
    }
LAB_0010db44:
    pcVar6 = *ppuVar7;
  }
  else {
    if (uVar1 < 10) {
      ppuVar7 = &power_supply_usb_type_text + uVar1;
      if (0x4f < (ulong)uVar1 * 8) goto LAB_0010db6c;
      goto LAB_0010db44;
    }
    pcVar6 = "Unknown";
  }
  iVar5 = scnprintf(param_3,0x1000,&DAT_00105295,pcVar6);
LAB_0010db8c:
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x638) == local_28) {
    return (long)iVar5;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long usb_typec_compliant_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xc00000000;
  local_38 = *(undefined4 *)(param_1 + 0x1c4);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x1b8) + 0x30));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long usb_2_typec_compliant_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xc00000000;
  local_38 = *(undefined4 *)(param_1 + 500);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x1e8) + 0x30));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long charge_control_en_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x638);
  local_44 = 0x1900000000;
  local_48 = *(undefined4 *)(param_1 + 0x194);
  local_3c = 0;
  local_50 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
  if (iVar2 < 0) {
    _printk(&DAT_00102ddd,"get_charge_control_en",iVar2);
  }
  else {
    *(bool *)(param_1 + 0x784) = *(int *)(*(long *)(param_1 + 0x188) + 100) != 0;
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3);
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_38) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long charge_control_en_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  byte local_54 [4];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  uint local_3c;
  long local_38;
  
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x638);
  local_54[0] = 0;
  iVar2 = kstrtobool(param_3,local_54);
  if (iVar2 == 0) {
    if ((uint)local_54[0] != (uint)*(byte *)(param_1 + 0x784)) {
      local_48 = *(undefined4 *)(param_1 + 0x198);
      local_44 = 0x1900000000;
      local_50 = 0x10000800a;
      local_3c = (uint)local_54[0];
      iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
      if (iVar2 < 0) {
        _printk(&DAT_00102960,"charge_control_en_store",iVar2);
        param_4 = (long)iVar2;
      }
      else {
        *(byte *)(param_1 + 0x784) = local_54[0];
      }
    }
  }
  else {
    param_4 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_38) {
    return param_4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long wls_debug_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x638);
  local_40 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_118 = 0x10000800a;
  local_110 = *(undefined4 *)(param_1 + 0x254);
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_108 = 0;
  uStack_10c = 0x55;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_118,0xdc);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_0010392a,param_1 + 2000);
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_38) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void wls_debug_store(long param_1,undefined8 param_2,char *param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined1 local_118;
  char local_117 [199];
  uint uStack_50;
  long local_48;
  
  lVar1 = sp_el0;
  local_48 = *(long *)(lVar1 + 0x638);
  uStack_50 = 0;
  _printk(&DAT_00103ead,"wls_debug_store");
  local_118 = 0;
  local_117[0] = '\0';
  local_117[1] = '\0';
  local_117[2] = '\0';
  local_117[3] = '\0';
  local_117[4] = '\0';
  local_117[5] = '\0';
  local_117[6] = '\0';
  local_117[7] = '\0';
  local_128 = 0x10000800a;
  local_120 = *(undefined4 *)(param_1 + 600);
  local_117[8] = '\0';
  local_117[9] = '\0';
  local_117[10] = '\0';
  local_117[0xb] = '\0';
  local_117[0xc] = '\0';
  local_117[0xd] = '\0';
  local_117[0xe] = '\0';
  local_117[0xf] = '\0';
  local_117[0x10] = '\0';
  local_117[0x11] = '\0';
  local_117[0x12] = '\0';
  local_117[0x13] = '\0';
  local_117[0x14] = '\0';
  local_117[0x15] = '\0';
  local_117[0x16] = '\0';
  local_117[0x17] = '\0';
  uStack_11c = 0x55;
  local_117[0x18] = '\0';
  local_117[0x19] = '\0';
  local_117[0x1a] = '\0';
  local_117[0x1b] = '\0';
  local_117[0x1c] = '\0';
  local_117[0x1d] = '\0';
  local_117[0x1e] = '\0';
  local_117[0x1f] = '\0';
  local_117[0x20] = '\0';
  local_117[0x21] = '\0';
  local_117[0x22] = '\0';
  local_117[0x23] = '\0';
  local_117[0x24] = '\0';
  local_117[0x25] = '\0';
  local_117[0x26] = '\0';
  local_117[0x27] = '\0';
  local_117[0x28] = '\0';
  local_117[0x29] = '\0';
  local_117[0x2a] = '\0';
  local_117[0x2b] = '\0';
  local_117[0x2c] = '\0';
  local_117[0x2d] = '\0';
  local_117[0x2e] = '\0';
  local_117[0x2f] = '\0';
  local_117[0x30] = '\0';
  local_117[0x31] = '\0';
  local_117[0x32] = '\0';
  local_117[0x33] = '\0';
  local_117[0x34] = '\0';
  local_117[0x35] = '\0';
  local_117[0x36] = '\0';
  local_117[0x37] = '\0';
  local_117[0x38] = '\0';
  local_117[0x39] = '\0';
  local_117[0x3a] = '\0';
  local_117[0x3b] = '\0';
  local_117[0x3c] = '\0';
  local_117[0x3d] = '\0';
  local_117[0x3e] = '\0';
  local_117[0x3f] = '\0';
  local_117[0x40] = '\0';
  local_117[0x41] = '\0';
  local_117[0x42] = '\0';
  local_117[0x43] = '\0';
  local_117[0x44] = '\0';
  local_117[0x45] = '\0';
  local_117[0x46] = '\0';
  local_117[0x47] = '\0';
  local_117[0x48] = '\0';
  local_117[0x49] = '\0';
  local_117[0x4a] = '\0';
  local_117[0x4b] = '\0';
  local_117[0x4c] = '\0';
  local_117[0x4d] = '\0';
  local_117[0x4e] = '\0';
  local_117[0x4f] = '\0';
  local_117[0x50] = '\0';
  local_117[0x51] = '\0';
  local_117[0x52] = '\0';
  local_117[0x53] = '\0';
  local_117[0x54] = '\0';
  local_117[0x55] = '\0';
  local_117[0x56] = '\0';
  local_117[0x57] = '\0';
  local_117[0x58] = '\0';
  local_117[0x59] = '\0';
  local_117[0x5a] = '\0';
  local_117[0x5b] = '\0';
  local_117[0x5c] = '\0';
  local_117[0x5d] = '\0';
  local_117[0x5e] = '\0';
  local_117[0x5f] = '\0';
  local_117[0x60] = '\0';
  local_117[0x61] = '\0';
  local_117[0x62] = '\0';
  local_117[99] = '\0';
  local_117[100] = '\0';
  local_117[0x65] = '\0';
  local_117[0x66] = '\0';
  local_117[0x67] = '\0';
  local_117[0x68] = '\0';
  local_117[0x69] = '\0';
  local_117[0x6a] = '\0';
  local_117[0x6b] = '\0';
  local_117[0x6c] = '\0';
  local_117[0x6d] = '\0';
  local_117[0x6e] = '\0';
  local_117[0x6f] = '\0';
  local_117[0x70] = '\0';
  local_117[0x71] = '\0';
  local_117[0x72] = '\0';
  local_117[0x73] = '\0';
  local_117[0x74] = '\0';
  local_117[0x75] = '\0';
  local_117[0x76] = '\0';
  local_117[0x77] = '\0';
  local_117[0x78] = '\0';
  local_117[0x79] = '\0';
  local_117[0x7a] = '\0';
  local_117[0x7b] = '\0';
  local_117[0x7c] = '\0';
  local_117[0x7d] = '\0';
  local_117[0x7e] = '\0';
  local_117[0x7f] = '\0';
  local_117[0x80] = '\0';
  local_117[0x81] = '\0';
  local_117[0x82] = '\0';
  local_117[0x83] = '\0';
  local_117[0x84] = '\0';
  local_117[0x85] = '\0';
  local_117[0x86] = '\0';
  local_117[0x87] = '\0';
  local_117[0x88] = '\0';
  local_117[0x89] = '\0';
  local_117[0x8a] = '\0';
  local_117[0x8b] = '\0';
  local_117[0x8c] = '\0';
  local_117[0x8d] = '\0';
  local_117[0x8e] = '\0';
  local_117[0x8f] = '\0';
  local_117[0x90] = '\0';
  local_117[0x91] = '\0';
  local_117[0x92] = '\0';
  local_117[0x93] = '\0';
  local_117[0x94] = '\0';
  local_117[0x95] = '\0';
  local_117[0x96] = '\0';
  local_117[0x97] = '\0';
  local_117[0x98] = '\0';
  local_117[0x99] = '\0';
  local_117[0x9a] = '\0';
  local_117[0x9b] = '\0';
  local_117[0x9c] = '\0';
  local_117[0x9d] = '\0';
  local_117[0x9e] = '\0';
  local_117[0x9f] = '\0';
  local_117[0xa0] = '\0';
  local_117[0xa1] = '\0';
  local_117[0xa2] = '\0';
  local_117[0xa3] = '\0';
  local_117[0xa4] = '\0';
  local_117[0xa5] = '\0';
  local_117[0xa6] = '\0';
  local_117[0xa7] = '\0';
  local_117[0xa8] = '\0';
  local_117[0xa9] = '\0';
  local_117[0xaa] = '\0';
  local_117[0xab] = '\0';
  local_117[0xac] = '\0';
  local_117[0xad] = '\0';
  local_117[0xae] = '\0';
  local_117[0xaf] = '\0';
  local_117[0xb0] = '\0';
  local_117[0xb1] = '\0';
  local_117[0xb2] = '\0';
  local_117[0xb3] = '\0';
  local_117[0xb4] = '\0';
  local_117[0xb5] = '\0';
  local_117[0xb6] = '\0';
  local_117[0xb7] = '\0';
  local_117[0xb8] = '\0';
  local_117[0xb9] = '\0';
  local_117[0xba] = '\0';
  local_117[0xbb] = '\0';
  local_117[0xbc] = '\0';
  local_117[0xbd] = '\0';
  local_117[0xbe] = '\0';
  local_117[0xbf] = '\0';
  local_117[0xc0] = '\0';
  local_117[0xc1] = '\0';
  local_117[0xc2] = '\0';
  local_117[0xc3] = '\0';
  local_117[0xc4] = '\0';
  local_117[0xc5] = '\0';
  local_117[0xc6] = '\0';
  uStack_50 = uStack_50 & 0xffffff00;
  if (param_4 < 0xc9) {
    strncpy(local_117,param_3,param_4);
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_128,0xdc);
    lVar1 = sp_el0;
    uVar3 = (long)iVar2;
    if (-1 < iVar2) {
      uVar3 = param_4;
    }
    if (*(long *)(lVar1 + 0x638) == local_48) {
      return;
    }
  }
  else {
    uVar3 = fortify_panic("strncpy");
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar3);
}



long cp_mode_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x2300000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x8c));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void cp_mode_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44 = 0;
  iVar2 = kstrtoint(param_3,10,&local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0x2300000000;
    local_2c = local_44;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long bq2597x_chip_ok_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x2400000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x90));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long bq2597x_slave_chip_ok_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x2500000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x94));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long bq2597x_bus_current_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x2600000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x98));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long bq2597x_slave_bus_current_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x2700000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x9c));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long bq2597x_bus_delta_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x2800000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0xa0));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long bq2597x_bus_voltage_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x2900000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0xa4));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long bq2597x_battery_present_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x2a00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0xa8));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long bq2597x_slave_battery_present_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x2b00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0xac));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long bq2597x_battery_voltage_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x2c00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0xb0));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long bq2597x_battery_temp_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x2d00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0xb4));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long dam_ovpgate_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x2e00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0xb8));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void dam_ovpgate_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte local_44 [4];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  uint local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44[0] = 0;
  iVar2 = kstrtobool(param_3,local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0x2e00000000;
    local_2c = (uint)local_44[0];
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long real_type_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  char *pcVar6;
  undefined **ppuVar7;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_34 = 0x800000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar5 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (iVar5 < 0) goto LAB_0010eb6c;
  uVar1 = *(uint *)(*(long *)(param_1 + 0x248) + 0x20);
  uVar2 = uVar1 - 0x80;
  if (uVar2 < 5) {
    ppuVar7 = &qc_power_supply_usb_type_text + uVar2;
    if (0x27 < (ulong)uVar2 * 8) {
LAB_0010eb4c:
                    // WARNING: Does not return
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10eb50);
      (*pcVar4)();
    }
LAB_0010eb24:
    pcVar6 = *ppuVar7;
  }
  else {
    if (uVar1 < 10) {
      ppuVar7 = &power_supply_usb_type_text + uVar1;
      if (0x4f < (ulong)uVar1 * 8) goto LAB_0010eb4c;
      goto LAB_0010eb24;
    }
    pcVar6 = "Unknown";
  }
  iVar5 = scnprintf(param_3,0x1000,&DAT_00105295,pcVar6);
LAB_0010eb6c:
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x638) == local_28) {
    return (long)iVar5;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long thermal_board_temp_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x900000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_0010372f,*(undefined4 *)(param_1 + 0xc94));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void thermal_board_temp_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44 = 0;
  iVar2 = kstrtoint(param_3,10,&local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0x900000000;
    local_2c = local_44;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long thermal_scene_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xa00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_0010372f,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x28));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void thermal_scene_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44 = 0;
  iVar2 = kstrtoint(param_3,10,&local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0xa00000000;
    local_2c = local_44;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long ntc_alarm_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xb00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_0010372f,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x2c));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void ntc_alarm_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54 = 0;
  iVar2 = kstrtoint(param_3,0,&local_54);
  if (iVar2 == 0) {
    _printk(&DAT_00105da2,"ntc_alarm_store",local_54);
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0xb00000000;
    local_3c = local_54;
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long battcont_online_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x7b00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x1ec));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long connector_temp_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x200000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00106452,*(undefined4 *)(*(long *)(param_1 + 0x248) + 8));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void connector_temp_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44 = 0;
  iVar2 = kstrtoint(param_3,10,&local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0x200000000;
    local_2c = local_44;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long connector_temp2_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x300000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00106452,*(undefined4 *)(*(long *)(param_1 + 0x248) + 0xc)
                     );
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long authentic_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x638);
  _printk(&DAT_00104294,"authentic_show",*(undefined4 *)(*(long *)(param_1 + 0x248) + 0x10));
  local_48 = *(undefined4 *)(param_1 + 0x254);
  local_3c = 0;
  local_44 = 0x400000000;
  local_50 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x10));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_38) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void authentic_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte local_54 [4];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  uint local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54[0] = 0;
  iVar2 = kstrtobool(param_3,local_54);
  if (iVar2 == 0) {
    *(byte *)(param_1 + 0xc80) = local_54[0];
    _printk(&DAT_0010444b,"authentic_store");
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0x400000000;
    local_3c = (uint)local_54[0];
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long bap_match_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x500000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    _printk(&DAT_0010299b,"bap_match_show",*(undefined4 *)(*(long *)(param_1 + 0x248) + 0x14));
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x14));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void bap_match_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54 = 0;
  iVar2 = kstrtoint(param_3,10,&local_54);
  if (iVar2 == 0) {
    _printk(&DAT_001029c2,"bap_match_store",local_54);
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0x500000000;
    local_3c = local_54;
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long verify_slave_flag_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = scnprintf(param_3,0x1000,&DAT_00103287,*(undefined1 *)(param_1 + 0xc82));
  return (long)iVar1;
}



undefined8
verify_slave_flag_store(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined1 local_2c [4];
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_2c[0] = 0;
  iVar2 = kstrtobool(param_3,local_2c);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0xc82) = local_2c[0];
    _printk(&DAT_001046ee,"verify_slave_flag_store");
  }
  else {
    param_4 = 0xffffffffffffffea;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return param_4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void verify_digest_show(long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  ulong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_70 = 0x10000800a;
  local_68 = *(undefined4 *)(param_1 + 0x254);
  local_50 = 0;
  uStack_48 = 0;
  uStack_64 = 1;
  local_60 = 0;
  uStack_58 = 0;
  local_40 = (uint)*(byte *)(param_1 + 0xc82);
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_70,0x34);
  if (iVar2 < 0) {
    lVar3 = (long)iVar2;
  }
  else {
    lVar3 = 0;
    do {
      local_70 = local_70 & 0xffffffff00000000;
      snprintf((char *)&local_70,3,"%02x",(uint)*(byte *)(*(long *)(param_1 + 0x7c0) + lVar3));
      strlcat(param_3,&local_70,0x41);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x20);
    sVar4 = strlen(param_3);
    param_3[(int)sVar4] = '\0';
    _printk(&DAT_00102f6b,"verify_digest_show",param_3);
    sVar4 = strlen(param_3);
    lVar3 = sVar4 + 1;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_38) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(lVar3);
}



void verify_digest_store(long param_1,undefined8 param_2,char *param_3,long param_4)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  size_t sVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  char cVar10;
  ulong uVar11;
  char cVar12;
  byte local_e0 [72];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  long local_38;
  
  lVar6 = sp_el0;
  local_38 = *(long *)(lVar6 + 0x638);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_e0[0x40] = 0;
  local_e0[0x41] = 0;
  local_e0[0x42] = 0;
  local_e0[0x43] = 0;
  local_e0[0x44] = 0;
  local_e0[0x45] = 0;
  local_e0[0x30] = 0;
  local_e0[0x31] = 0;
  local_e0[0x32] = 0;
  local_e0[0x33] = 0;
  local_e0[0x34] = 0;
  local_e0[0x35] = 0;
  local_e0[0x36] = 0;
  local_e0[0x37] = 0;
  local_e0[0x38] = 0;
  local_e0[0x39] = 0;
  local_e0[0x3a] = 0;
  local_e0[0x3b] = 0;
  local_e0[0x3c] = 0;
  local_e0[0x3d] = 0;
  local_e0[0x3e] = 0;
  local_e0[0x3f] = 0;
  local_e0[0x20] = 0;
  local_e0[0x21] = 0;
  local_e0[0x22] = 0;
  local_e0[0x23] = 0;
  local_e0[0x24] = 0;
  local_e0[0x25] = 0;
  local_e0[0x26] = 0;
  local_e0[0x27] = 0;
  local_e0[0x28] = 0;
  local_e0[0x29] = 0;
  local_e0[0x2a] = 0;
  local_e0[0x2b] = 0;
  local_e0[0x2c] = 0;
  local_e0[0x2d] = 0;
  local_e0[0x2e] = 0;
  local_e0[0x2f] = 0;
  local_e0[0x10] = 0;
  local_e0[0x11] = 0;
  local_e0[0x12] = 0;
  local_e0[0x13] = 0;
  local_e0[0x14] = 0;
  local_e0[0x15] = 0;
  local_e0[0x16] = 0;
  local_e0[0x17] = 0;
  local_e0[0x18] = 0;
  local_e0[0x19] = 0;
  local_e0[0x1a] = 0;
  local_e0[0x1b] = 0;
  local_e0[0x1c] = 0;
  local_e0[0x1d] = 0;
  local_e0[0x1e] = 0;
  local_e0[0x1f] = 0;
  local_e0[0] = 0;
  local_e0[1] = 0;
  local_e0[2] = 0;
  local_e0[3] = 0;
  local_e0[4] = 0;
  local_e0[5] = 0;
  local_e0[6] = 0;
  local_e0[7] = 0;
  local_e0[8] = 0;
  local_e0[9] = 0;
  local_e0[10] = 0;
  local_e0[0xb] = 0;
  local_e0[0xc] = 0;
  local_e0[0xd] = 0;
  local_e0[0xe] = 0;
  local_e0[0xf] = 0;
  if (param_4 - 1U < 0x47) {
    strncpy((char *)local_e0,param_3,param_4 - 1U);
    bVar1 = local_e0[0];
    sVar5 = strnlen((char *)local_e0,0x46);
    if (sVar5 < 0x47) {
      if (sVar5 != 0x46) {
        sVar5 = strnlen((char *)local_e0,0x46);
        if (0x46 < sVar5) goto LAB_0010f9c0;
        if (sVar5 != 0x46) {
          if ((uint)sVar5 < 2) {
            if ((uint)sVar5 != 0) {
              uVar7 = 0;
              goto LAB_0010f920;
            }
          }
          else {
            uVar11 = 0;
            uVar7 = sVar5 >> 1;
            pbVar8 = local_e0;
            do {
              if (uVar11 == 0x21) goto LAB_0010f9bc;
              pbVar9 = pbVar8 + 2;
              cVar12 = '\t';
              cVar10 = '\t';
              if (0x2c < pbVar8[1] - 0x3a) {
                cVar10 = '\0';
              }
              if (0x2c < *pbVar8 - 0x3a) {
                cVar12 = '\0';
              }
              *(byte *)((long)&local_98 + uVar11) =
                   cVar10 + pbVar8[1] & 0xf | (cVar12 + *pbVar8) * '\x10';
              uVar11 = uVar11 + 1;
              pbVar8 = pbVar9;
            } while (uVar7 != uVar11);
            if ((sVar5 & 1) != 0) {
              if (0x41 < sVar5) {
LAB_0010f9bc:
                    // WARNING: Does not return
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10f9c0);
                (*pcVar3)();
              }
              bVar1 = *pbVar9;
LAB_0010f920:
              cVar10 = -0x37;
              if (0x2c < bVar1 - 0x3a) {
                cVar10 = -0x30;
              }
              *(byte *)((long)&local_98 + uVar7) = cVar10 + bVar1;
            }
          }
          local_68 = *(undefined4 *)(param_1 + 600);
          local_70 = 0x10000800a;
          uStack_64 = 1;
          local_40 = (uint)*(byte *)(param_1 + 0xc82);
          local_60 = local_98;
          uStack_58 = uStack_90;
          local_50 = local_88;
          uStack_48 = uStack_80;
          iVar4 = battery_chg_write(param_1 + -8,(long)&local_70,0x34);
          lVar2 = sp_el0;
          lVar6 = (long)iVar4;
          if (-1 < iVar4) {
            lVar6 = param_4;
          }
          if (*(long *)(lVar2 + 0x638) == local_38) {
            return;
          }
          goto LAB_0010f9e4;
        }
      }
    }
    else {
LAB_0010f9c0:
      fortify_panic("strnlen");
    }
    fortify_panic("__fortify_strlen");
  }
  lVar6 = fortify_panic("strncpy");
LAB_0010f9e4:
                    // WARNING: Subroutine does not return
  __stack_chk_fail(lVar6);
}



long chip_ok_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x600000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x18));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long resistance_id_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_34 = 0;
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,**(undefined4 **)(param_1 + 0x248));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long input_suspend_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x3500000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0xd4));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void input_suspend_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte local_54 [4];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  uint local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54[0] = 0;
  iVar2 = kstrtobool(param_3,local_54);
  if (iVar2 == 0) {
    _printk(&DAT_00102ad3,"input_suspend_store",local_54[0]);
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0x3500000000;
    local_3c = (uint)local_54[0];
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long fastchg_mode_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x3600000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0xd8));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long cc_orientation_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x3400000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0xd0));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long typec_mode_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = sp_el0;
  local_28 = *(long *)(lVar2 + 0x638);
  local_34 = 0x7100000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar4 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar4) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x248) + 0x1c4);
    if (9 < uVar1) {
                    // WARNING: Does not return
      pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x10fedc);
      (*pcVar3)();
    }
    iVar4 = scnprintf(param_3,0x1000,&DAT_00105295,(&power_supply_usbc_text)[uVar1]);
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x638) == local_28) {
    return (long)iVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long mtbf_current_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x7200000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x1c8));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void mtbf_current_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54 = 0;
  iVar2 = kstrtoint(param_3,10,&local_54);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xc84) = local_54;
    _printk(&DAT_0010448f,"mtbf_current_store");
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0x7200000000;
    local_3c = local_54;
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long quick_charge_type_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  undefined1 uVar10;
  long lVar11;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  long local_68;
  
  lVar11 = sp_el0;
  local_68 = *(long *)(lVar11 + 0x638);
  lVar11 = param_1 + -8;
  local_78 = *(undefined4 *)(param_1 + 0x194);
  local_74 = 0x100000000;
  local_6c = 0;
  local_80 = 0x10000800a;
  iVar9 = battery_chg_write(lVar11,(long)&local_80,0x18);
  if (-1 < iVar9) {
    local_78 = *(undefined4 *)(param_1 + 0x194);
    iVar2 = *(int *)(*(long *)(param_1 + 0x188) + 4);
    local_74 = 0;
    local_6c = 0;
    local_80 = 0x10000800a;
    iVar9 = battery_chg_write(lVar11,(long)&local_80,0x18);
    if (-1 < iVar9) {
      local_78 = *(undefined4 *)(param_1 + 0x1c4);
      iVar3 = **(int **)(param_1 + 0x188);
      local_74 = 0xb00000000;
      local_6c = 0;
      local_80 = 0x10000800a;
      iVar9 = battery_chg_write(lVar11,(long)&local_80,0x18);
      if (-1 < iVar9) {
        local_78 = *(undefined4 *)(param_1 + 0x254);
        iVar9 = *(int *)(*(long *)(param_1 + 0x1b8) + 0x2c);
        local_74 = 0x1f00000000;
        local_6c = 0;
        local_80 = 0x10000800a;
        battery_chg_write(lVar11,(long)&local_80,0x18);
        local_78 = *(undefined4 *)(param_1 + 0x254);
        iVar4 = *(int *)(*(long *)(param_1 + 0x248) + 0x7c);
        local_74 = 0x3d00000000;
        local_6c = 0;
        local_80 = 0x10000800a;
        battery_chg_write(lVar11,(long)&local_80,0x18);
        local_78 = *(undefined4 *)(param_1 + 0x254);
        uVar5 = *(uint *)(*(long *)(param_1 + 0x248) + 0xf4);
        local_74 = 0x400000000;
        local_6c = 0;
        local_80 = 0x10000800a;
        battery_chg_write(lVar11,(long)&local_80,0x18);
        local_78 = *(undefined4 *)(param_1 + 0x254);
        iVar6 = *(int *)(*(long *)(param_1 + 0x248) + 0x10);
        local_74 = 0x500000000;
        local_6c = 0;
        local_80 = 0x10000800a;
        battery_chg_write(lVar11,(long)&local_80,0x18);
        local_78 = *(undefined4 *)(param_1 + 0x254);
        iVar7 = *(int *)(*(long *)(param_1 + 0x248) + 0x14);
        local_74 = 0x200000000;
        local_6c = 0;
        local_80 = 0x10000800a;
        battery_chg_write(lVar11,(long)&local_80,0x18);
        uVar10 = 0;
        if ((((iVar2 != 6) && (iVar2 != 0xd)) && (iVar6 != 0)) && (iVar7 != 0)) {
          if ((*(int *)(*(long *)(param_1 + 0x248) + 8) < 0x259) || (iVar3 != 2)) {
            if ((iVar9 == 8) && (iVar4 == 1)) {
              uVar10 = 3;
              if (0x31 < uVar5) {
                uVar10 = 4;
              }
            }
            else if (iVar9 == 8) {
              uVar10 = 1;
            }
            else {
              uVar10 = 0;
              if (adapter_cap != 0) {
                uVar1 = DAT_0010056c;
                if (iVar9 != adapter_cap) {
                  uVar1 = 0;
                }
                uVar10 = uVar1;
                if (DAT_00100570 != 0) {
                  uVar10 = DAT_00100574;
                  if (iVar9 != DAT_00100570) {
                    uVar10 = uVar1;
                  }
                  if (DAT_00100578 != 0) {
                    uVar1 = DAT_0010057c;
                    if (iVar9 != DAT_00100578) {
                      uVar1 = uVar10;
                    }
                    uVar10 = uVar1;
                    if (DAT_00100580 != 0) {
                      uVar1 = DAT_00100584;
                      if (iVar9 != DAT_00100580) {
                        uVar1 = uVar10;
                      }
                      uVar10 = uVar1;
                      if (DAT_00100588 != 0) {
                        uVar1 = DAT_0010058c;
                        if (iVar9 != DAT_00100588) {
                          uVar1 = uVar10;
                        }
                        uVar10 = uVar1;
                        if (DAT_00100590 != 0) {
                          uVar1 = DAT_00100594;
                          if (iVar9 != DAT_00100590) {
                            uVar1 = uVar10;
                          }
                          uVar10 = uVar1;
                          if (DAT_00100598 != 0) {
                            uVar1 = DAT_0010059c;
                            if (iVar9 != DAT_00100598) {
                              uVar1 = uVar10;
                            }
                            uVar10 = uVar1;
                            if (DAT_001005a0 != 0) {
                              uVar1 = DAT_001005a4;
                              if (iVar9 != DAT_001005a0) {
                                uVar1 = uVar10;
                              }
                              uVar10 = uVar1;
                              if (DAT_001005a8 != 0) {
                                uVar1 = DAT_001005ac;
                                if (iVar9 != DAT_001005a8) {
                                  uVar1 = uVar10;
                                }
                                uVar10 = uVar1;
                                if (DAT_001005b0 != 0) {
                                  uVar1 = DAT_001005b4;
                                  if (iVar9 != DAT_001005b0) {
                                    uVar1 = uVar10;
                                  }
                                  uVar10 = uVar1;
                                  if (DAT_001005b8 != 0) {
                    // WARNING: Does not return
                                    pcVar8 = (code *)SoftwareBreakpoint(0x5512,0x110430);
                                    (*pcVar8)();
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            uVar10 = 0;
          }
        }
        iVar9 = scnprintf(param_3,0x1000,&DAT_0010372f,uVar10);
      }
    }
  }
  lVar11 = sp_el0;
  if (*(long *)(lVar11 + 0x638) != local_68) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return (long)iVar9;
}



long apdo_max_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x3c00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0xf0));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long soc_decimal_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x3900000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_0010372f,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0xe4));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long soc_decimal_rate_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x3a00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_0010372f,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0xe8));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long smart_batt_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x7700000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x1dc));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void smart_batt_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54 = 0;
  iVar2 = kstrtoint(param_3,0,&local_54);
  if (iVar2 == 0) {
    _printk(&DAT_001060a4,"smart_batt_store",local_54);
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0x7700000000;
    local_3c = local_54;
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long smart_fv_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x7800000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x1e0));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void smart_fv_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54 = 0;
  iVar2 = kstrtoint(param_3,0,&local_54);
  if (iVar2 == 0) {
    _printk(&DAT_00103743,"smart_fv_store",local_54);
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0x7800000000;
    local_3c = local_54;
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long night_charging_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x3700000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0xdc));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void night_charging_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte local_54 [4];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  uint local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54[0] = 0;
  iVar2 = kstrtobool(param_3,local_54);
  if (iVar2 == 0) {
    _printk(&DAT_00102b13,"night_charging_store",local_54[0]);
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0x3700000000;
    local_3c = (uint)local_54[0];
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long screen_cctog_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x7500000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x1d4));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void screen_cctog_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte local_54 [4];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  uint local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54[0] = 0;
  iVar2 = kstrtobool(param_3,local_54);
  if (iVar2 == 0) {
    _printk(&DAT_00103ee4,"screen_cctog_store",local_54[0]);
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0x7500000000;
    local_3c = (uint)local_54[0];
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long software_cid_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x7600000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x1d8));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long usbinterface_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x3800000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0xe0));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void usbinterface_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte local_54 [4];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  uint local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54[0] = 0;
  iVar2 = kstrtobool(param_3,local_54);
  if (iVar2 == 0) {
    _printk(&DAT_001060f3,"usbinterface_store",local_54[0]);
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0x3800000000;
    local_3c = (uint)local_54[0];
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long request_vdm_cmd_show(long param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  char local_e8 [128];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined8 uStack_50;
  long local_48;
  
  lVar3 = sp_el0;
  local_48 = *(long *)(lVar3 + 0x638);
  lVar3 = param_1 + -8;
  local_e8[0x70] = '\0';
  local_e8[0x71] = '\0';
  local_e8[0x72] = '\0';
  local_e8[0x73] = '\0';
  local_e8[0x74] = '\0';
  local_e8[0x75] = '\0';
  local_e8[0x76] = '\0';
  local_e8[0x77] = '\0';
  local_e8[0x78] = '\0';
  local_e8[0x79] = '\0';
  local_e8[0x7a] = '\0';
  local_e8[0x7b] = '\0';
  local_e8[0x7c] = '\0';
  local_e8[0x7d] = '\0';
  local_e8[0x7e] = '\0';
  local_e8[0x7f] = '\0';
  local_5c = 0;
  uStack_58 = 0x21;
  local_60 = *(undefined4 *)(param_1 + 0x254);
  local_e8[0x60] = '\0';
  local_e8[0x61] = '\0';
  local_e8[0x62] = '\0';
  local_e8[99] = '\0';
  local_e8[100] = '\0';
  local_e8[0x65] = '\0';
  local_e8[0x66] = '\0';
  local_e8[0x67] = '\0';
  local_e8[0x68] = '\0';
  local_e8[0x69] = '\0';
  local_e8[0x6a] = '\0';
  local_e8[0x6b] = '\0';
  local_e8[0x6c] = '\0';
  local_e8[0x6d] = '\0';
  local_e8[0x6e] = '\0';
  local_e8[0x6f] = '\0';
  local_e8[0x50] = '\0';
  local_e8[0x51] = '\0';
  local_e8[0x52] = '\0';
  local_e8[0x53] = '\0';
  local_e8[0x54] = '\0';
  local_e8[0x55] = '\0';
  local_e8[0x56] = '\0';
  local_e8[0x57] = '\0';
  local_e8[0x58] = '\0';
  local_e8[0x59] = '\0';
  local_e8[0x5a] = '\0';
  local_e8[0x5b] = '\0';
  local_e8[0x5c] = '\0';
  local_e8[0x5d] = '\0';
  local_e8[0x5e] = '\0';
  local_e8[0x5f] = '\0';
  local_e8[0x40] = '\0';
  local_e8[0x41] = '\0';
  local_e8[0x42] = '\0';
  local_e8[0x43] = '\0';
  local_e8[0x44] = '\0';
  local_e8[0x45] = '\0';
  local_e8[0x46] = '\0';
  local_e8[0x47] = '\0';
  local_e8[0x48] = '\0';
  local_e8[0x49] = '\0';
  local_e8[0x4a] = '\0';
  local_e8[0x4b] = '\0';
  local_e8[0x4c] = '\0';
  local_e8[0x4d] = '\0';
  local_e8[0x4e] = '\0';
  local_e8[0x4f] = '\0';
  local_e8[0x30] = '\0';
  local_e8[0x31] = '\0';
  local_e8[0x32] = '\0';
  local_e8[0x33] = '\0';
  local_e8[0x34] = '\0';
  local_e8[0x35] = '\0';
  local_e8[0x36] = '\0';
  local_e8[0x37] = '\0';
  local_e8[0x38] = '\0';
  local_e8[0x39] = '\0';
  local_e8[0x3a] = '\0';
  local_e8[0x3b] = '\0';
  local_e8[0x3c] = '\0';
  local_e8[0x3d] = '\0';
  local_e8[0x3e] = '\0';
  local_e8[0x3f] = '\0';
  local_e8[0x20] = '\0';
  local_e8[0x21] = '\0';
  local_e8[0x22] = '\0';
  local_e8[0x23] = '\0';
  local_e8[0x24] = '\0';
  local_e8[0x25] = '\0';
  local_e8[0x26] = '\0';
  local_e8[0x27] = '\0';
  local_e8[0x28] = '\0';
  local_e8[0x29] = '\0';
  local_e8[0x2a] = '\0';
  local_e8[0x2b] = '\0';
  local_e8[0x2c] = '\0';
  local_e8[0x2d] = '\0';
  local_e8[0x2e] = '\0';
  local_e8[0x2f] = '\0';
  local_e8[0x10] = '\0';
  local_e8[0x11] = '\0';
  local_e8[0x12] = '\0';
  local_e8[0x13] = '\0';
  local_e8[0x14] = '\0';
  local_e8[0x15] = '\0';
  local_e8[0x16] = '\0';
  local_e8[0x17] = '\0';
  local_e8[0x18] = '\0';
  local_e8[0x19] = '\0';
  local_e8[0x1a] = '\0';
  local_e8[0x1b] = '\0';
  local_e8[0x1c] = '\0';
  local_e8[0x1d] = '\0';
  local_e8[0x1e] = '\0';
  local_e8[0x1f] = '\0';
  local_68 = 0x10000800a;
  local_e8[0] = '\0';
  local_e8[1] = '\0';
  local_e8[2] = '\0';
  local_e8[3] = '\0';
  local_e8[4] = '\0';
  local_e8[5] = '\0';
  local_e8[6] = '\0';
  local_e8[7] = '\0';
  local_e8[8] = '\0';
  local_e8[9] = '\0';
  local_e8[10] = '\0';
  local_e8[0xb] = '\0';
  local_e8[0xc] = '\0';
  local_e8[0xd] = '\0';
  local_e8[0xe] = '\0';
  local_e8[0xf] = '\0';
  local_54 = 0;
  iVar1 = battery_chg_write(lVar3,(long)&local_68,0x18);
  if (-1 < iVar1) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x248) + 0x84);
    _printk(&DAT_0010611f,"request_vdm_cmd_show",iVar1);
    switch(iVar1) {
    case 0:
    case 4:
    case 6:
    case 7:
    case 8:
    case 9:
      iVar1 = snprintf(param_3,0x1000,"%d,Null",iVar1);
      break;
    case 1:
      local_60 = *(undefined4 *)(param_1 + 0x254);
      local_5c = 0;
      uStack_58 = 0x14;
      local_68 = 0x10000800a;
      local_54 = 0;
      battery_chg_write(lVar3,(long)&local_68,0x18);
      iVar1 = snprintf(param_3,0x1000,"%d,%d",1,*(int *)(*(long *)(param_1 + 0x248) + 0x50));
      break;
    case 2:
      local_60 = *(undefined4 *)(param_1 + 0x254);
      local_5c = 0;
      uStack_58 = 0x15;
      local_68 = 0x10000800a;
      local_54 = 0;
      battery_chg_write(lVar3,(long)&local_68,0x18);
      iVar1 = snprintf(param_3,0x1000,"%d,%d",2,*(int *)(*(long *)(param_1 + 0x248) + 0x54));
      break;
    case 3:
      local_60 = *(undefined4 *)(param_1 + 0x254);
      local_5c = 0;
      uStack_58 = 0x16;
      local_68 = 0x10000800a;
      local_54 = 0;
      battery_chg_write(lVar3,(long)&local_68,0x18);
      iVar1 = snprintf(param_3,0x1000,"%d,%d",3,*(int *)(*(long *)(param_1 + 0x248) + 0x58));
      break;
    case 5:
      local_60 = *(undefined4 *)(param_1 + 0x254);
      uStack_58 = 0;
      local_54 = 0;
      uStack_50 = 0;
      local_68 = 0x10000800a;
      local_5c = 0x18;
      iVar1 = battery_chg_write(lVar3,(long)&local_68,0x20);
      if (-1 < iVar1) {
        puVar2 = *(undefined4 **)(param_1 + 0x7c8);
        _printk(&DAT_001057c8,"request_vdm_cmd_show",*puVar2,puVar2[1],puVar2[2],puVar2[3]);
        local_68 = 0;
        local_60 = 0;
        local_5c = 0;
        snprintf((char *)&local_68,0x10,"%08lx",(ulong)**(uint **)(param_1 + 0x7c8));
        strlcat(local_e8,&local_68,0x80);
        local_68 = 0;
        local_60 = 0;
        local_5c = 0;
        snprintf((char *)&local_68,0x10,"%08lx",(ulong)*(uint *)(*(long *)(param_1 + 0x7c8) + 4));
        strlcat(local_e8,&local_68,0x80);
        local_68 = 0;
        local_60 = 0;
        local_5c = 0;
        snprintf((char *)&local_68,0x10,"%08lx",(ulong)*(uint *)(*(long *)(param_1 + 0x7c8) + 8));
        strlcat(local_e8,&local_68,0x80);
        local_68 = 0;
        local_60 = 0;
        local_5c = 0;
        snprintf((char *)&local_68,0x10,"%08lx",(ulong)*(uint *)(*(long *)(param_1 + 0x7c8) + 0xc));
        strlcat(local_e8,&local_68,0x80);
        iVar1 = snprintf(param_3,0x1000,"%d,%s",5,local_e8);
      }
      break;
    default:
      _printk(&DAT_001057f5,"request_vdm_cmd_show",iVar1);
      iVar1 = scnprintf(param_3,0x1000,&DAT_00103287,**(undefined4 **)(param_1 + 0x248));
    }
  }
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x638) != local_48) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return (long)iVar1;
}



undefined8 request_vdm_cmd_store(long param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  uint uVar6;
  size_t sVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  undefined4 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  char cVar14;
  ulong uVar15;
  char cVar16;
  int local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  byte local_a8 [64];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar4 = sp_el0;
  local_48 = *(long *)(lVar4 + 0x638);
  local_cc = 0;
  local_a8[0x30] = 0;
  local_a8[0x31] = 0;
  local_a8[0x32] = 0;
  local_a8[0x33] = 0;
  local_a8[0x34] = 0;
  local_a8[0x35] = 0;
  local_a8[0x36] = 0;
  local_a8[0x37] = 0;
  local_a8[0x38] = 0;
  local_a8[0x39] = 0;
  local_a8[0x3a] = 0;
  local_a8[0x3b] = 0;
  local_a8[0x3c] = 0;
  local_a8[0x3d] = 0;
  local_a8[0x3e] = 0;
  local_a8[0x3f] = 0;
  local_a8[0x20] = 0;
  local_a8[0x21] = 0;
  local_a8[0x22] = 0;
  local_a8[0x23] = 0;
  local_a8[0x24] = 0;
  local_a8[0x25] = 0;
  local_a8[0x26] = 0;
  local_a8[0x27] = 0;
  local_a8[0x28] = 0;
  local_a8[0x29] = 0;
  local_a8[0x2a] = 0;
  local_a8[0x2b] = 0;
  local_a8[0x2c] = 0;
  local_a8[0x2d] = 0;
  local_a8[0x2e] = 0;
  local_a8[0x2f] = 0;
  local_a8[0x10] = 0;
  local_a8[0x11] = 0;
  local_a8[0x12] = 0;
  local_a8[0x13] = 0;
  local_a8[0x14] = 0;
  local_a8[0x15] = 0;
  local_a8[0x16] = 0;
  local_a8[0x17] = 0;
  local_a8[0x18] = 0;
  local_a8[0x19] = 0;
  local_a8[0x1a] = 0;
  local_a8[0x1b] = 0;
  local_a8[0x1c] = 0;
  local_a8[0x1d] = 0;
  local_a8[0x1e] = 0;
  local_a8[0x1f] = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[6] = 0;
  local_a8[7] = 0;
  local_a8[8] = 0;
  local_a8[9] = 0;
  local_a8[10] = 0;
  local_a8[0xb] = 0;
  local_a8[0xc] = 0;
  local_a8[0xd] = 0;
  local_a8[0xe] = 0;
  local_a8[0xf] = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  sscanf(param_3,"%d,%s\n",&local_cc,(char *)local_a8);
  _printk(&DAT_00105de8,"request_vdm_cmd_store","request_vdm_cmd_store",param_3,local_cc,local_a8);
  bVar1 = local_a8[0];
  sVar7 = strnlen((char *)local_a8,0x40);
  if (0x40 < sVar7) {
LAB_00111550:
    fortify_panic("strnlen");
LAB_0011155c:
    uVar10 = fortify_panic("__fortify_strlen");
    goto LAB_00111568;
  }
  if (sVar7 == 0x40) goto LAB_0011155c;
  sVar7 = strnlen((char *)local_a8,0x40);
  iVar8 = local_cc;
  if (0x40 < sVar7) goto LAB_00111550;
  if (sVar7 == 0x40) goto LAB_0011155c;
  if ((uint)sVar7 < 2) {
    if ((uint)sVar7 != 0) {
      uVar10 = 0;
      goto LAB_00111358;
    }
  }
  else {
    uVar15 = 0;
    uVar10 = sVar7 >> 1;
    pbVar12 = local_a8;
    do {
      if (uVar15 == 0x20) goto LAB_0011154c;
      pbVar13 = pbVar12 + 2;
      cVar16 = '\t';
      cVar14 = '\t';
      if (0x2c < pbVar12[1] - 0x3a) {
        cVar14 = '\0';
      }
      if (0x2c < *pbVar12 - 0x3a) {
        cVar16 = '\0';
      }
      *(byte *)((long)&local_c8 + uVar15) = cVar14 + pbVar12[1] & 0xf | (cVar16 + *pbVar12) * '\x10'
      ;
      uVar15 = uVar15 + 1;
      pbVar12 = pbVar13;
    } while (uVar10 != uVar15);
    if ((sVar7 & 1) != 0) {
      if ((uVar10 - 0x20 < 0xffffffffffffffe1) || (0x3f < sVar7)) {
LAB_0011154c:
                    // WARNING: Does not return
        pcVar5 = (code *)SoftwareBreakpoint(1,0x111550);
        (*pcVar5)();
      }
      bVar1 = *pbVar13;
LAB_00111358:
      cVar14 = -0x37;
      if (0x2c < bVar1 - 0x3a) {
        cVar14 = -0x30;
      }
      *(byte *)((long)&local_c8 + uVar10) = cVar14 + bVar1;
    }
  }
  uVar6 = (uint)local_c8;
  _printk(&DAT_00105827,"usbpd_request_vdm_cmd",local_cc,local_c8 & 0xffffffff);
  uVar11 = 0x14;
  uVar9 = 0;
  switch(iVar8) {
  case 1:
    break;
  case 2:
    uVar11 = 0x15;
    uVar9 = 0;
    break;
  case 3:
    uVar11 = 0x16;
    uVar9 = 0;
    break;
  case 4:
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar9 = (local_c8._4_4_ & 0xff00ff00) >> 8 | (local_c8._4_4_ & 0xff00ff) << 8;
    uVar2 = ((uint)local_c0 & 0xff00ff00) >> 8 | ((uint)local_c0 & 0xff00ff) << 8;
    uVar3 = (local_c0._4_4_ & 0xff00ff00) >> 8 | (local_c0._4_4_ & 0xff00ff) << 8;
    local_c8 = CONCAT44(uVar9 >> 0x10 | uVar9 << 0x10,uVar6 >> 0x10 | uVar6 << 0x10);
    local_c0 = CONCAT44(uVar3 >> 0x10 | uVar3 << 0x10,uVar2 >> 0x10 | uVar2 << 0x10);
    _printk(&DAT_00102d51,"usbpd_request_vdm_cmd");
    uStack_5c = 0x17;
    goto LAB_00111520;
  case 5:
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar9 = (local_c8._4_4_ & 0xff00ff00) >> 8 | (local_c8._4_4_ & 0xff00ff) << 8;
    uVar2 = ((uint)local_c0 & 0xff00ff00) >> 8 | ((uint)local_c0 & 0xff00ff) << 8;
    uVar3 = (local_c0._4_4_ & 0xff00ff00) >> 8 | (local_c0._4_4_ & 0xff00ff) << 8;
    local_c8 = CONCAT44(uVar9 >> 0x10 | uVar9 << 0x10,uVar6 >> 0x10 | uVar6 << 0x10);
    local_c0 = CONCAT44(uVar3 >> 0x10 | uVar3 << 0x10,uVar2 >> 0x10 | uVar2 << 0x10);
    _printk(&DAT_00106158,"usbpd_request_vdm_cmd");
    uStack_5c = 0x18;
    goto LAB_00111520;
  case 6:
    uVar11 = 0x19;
    uVar9 = uVar6;
    break;
  case 7:
    uVar11 = 0x1a;
    uVar9 = uVar6;
    break;
  case 8:
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar9 = (local_c8._4_4_ & 0xff00ff00) >> 8 | (local_c8._4_4_ & 0xff00ff) << 8;
    uVar2 = ((uint)local_c0 & 0xff00ff00) >> 8 | ((uint)local_c0 & 0xff00ff) << 8;
    uVar3 = (local_c0._4_4_ & 0xff00ff00) >> 8 | (local_c0._4_4_ & 0xff00ff) << 8;
    local_c8 = CONCAT44(uVar9 >> 0x10 | uVar9 << 0x10,uVar6 >> 0x10 | uVar6 << 0x10);
    local_c0 = CONCAT44(uVar3 >> 0x10 | uVar3 << 0x10,uVar2 >> 0x10 | uVar2 << 0x10);
    _printk(&DAT_00106158,"usbpd_request_vdm_cmd");
    uStack_5c = 0x1b;
LAB_00111520:
    local_60 = *(undefined4 *)(param_1 + 600);
    iVar8 = 0x20;
    local_58 = local_c8;
    uStack_50 = local_c0;
    goto LAB_00111414;
  default:
    _printk(&DAT_001030ad,"usbpd_request_vdm_cmd",iVar8);
    uVar11 = 0x14;
    uVar9 = 0;
  }
  local_58 = CONCAT44(uVar9,uVar11);
  local_60 = *(undefined4 *)(param_1 + 600);
  iVar8 = 0x18;
  uStack_5c = 0;
LAB_00111414:
  local_68 = 0x10000800a;
  uVar6 = battery_chg_write(param_1 + -8,(long)&local_68,iVar8);
  uVar10 = (ulong)uVar6;
  lVar4 = sp_el0;
  if (*(long *)(lVar4 + 0x638) == local_48) {
    return param_4;
  }
LAB_00111568:
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar10);
}



void current_state_show(long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  char *pcVar5;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_34 = 0x1c00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (iVar2 < 0) {
    lVar3 = (long)iVar2;
  }
  else {
    iVar2 = *(int *)(*(long *)(param_1 + 0x248) + 0x70);
    if (iVar2 == 5) {
      pcVar5 = "SRC_Ready";
    }
    else {
      if (iVar2 != 0x20) {
        if (iVar2 == 0x1a) {
          lVar3 = 0xb;
          builtin_strncpy(param_3,"SNK_Startup",0xc);
        }
        else {
          lVar3 = 7;
          builtin_strncpy(param_3,"UNKNOWN",8);
        }
        goto LAB_00111660;
      }
      pcVar5 = "SNK_Ready";
    }
    uVar4 = *(undefined8 *)pcVar5;
    lVar3 = 9;
    param_3[8] = 'y';
    param_3[9] = '\0';
    *(undefined8 *)param_3 = uVar4;
  }
LAB_00111660:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(lVar3);
}



long adapter_id_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x1d00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_0010358d,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x74));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long adapter_svid_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x1e00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00104108,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x78));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long pd_verifed_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x1f00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x7c));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void pd_verifed_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte local_44 [4];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  uint local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44[0] = 0;
  iVar2 = kstrtobool(param_3,local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0x1f00000000;
    local_2c = (uint)local_44[0];
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long pdo2_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x2000000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,"%08x\n",*(undefined4 *)(*(long *)(param_1 + 0x248) + 0x80));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long verify_process_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x1300000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x4c));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void verify_process_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte local_44 [4];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  uint local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44[0] = 0;
  iVar2 = kstrtobool(param_3,local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0x1300000000;
    local_2c = (uint)local_44[0];
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long open_loadsw_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x8600000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x218));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void open_loadsw_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54 = 0;
  iVar2 = kstrtoint(param_3,0,&local_54);
  if (iVar2 == 0) {
    _printk(&DAT_001052b5,"open_loadsw_store",local_54);
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0x8600000000;
    local_3c = local_54;
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long power_max_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  int local_58 [2];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x638);
  local_58[0] = 0;
  local_58[1] = 0;
  if (*(undefined8 **)(param_1 + 0x1a0) == (undefined8 *)0x0) {
    iVar5 = 0;
  }
  else {
    uVar4 = usb_psy_get_prop(*(undefined8 **)(param_1 + 0x1a0),4,local_58);
    iVar5 = local_58[0];
    if ((int)uVar4 != 0) {
      iVar5 = 0;
    }
    _printk(&DAT_001056d9,"power_max_show",iVar5);
  }
  local_48 = *(undefined4 *)(param_1 + 0x194);
  local_44 = 0;
  local_3c = 0;
  local_50 = 0x10000800a;
  iVar3 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
  if (-1 < iVar3) {
    if ((**(int **)(param_1 + 0x188) == 1) ||
       (_printk(&DAT_00102d7c,"power_max_show",0), iVar5 != 0)) {
      local_48 = *(undefined4 *)(param_1 + 0x254);
      local_3c = 0;
      local_44 = 0x3d00000000;
      local_50 = 0x10000800a;
      iVar3 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
      if (iVar3 < 0) goto LAB_00111db0;
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0xf4);
    }
    else {
      uVar1 = 0;
    }
    iVar3 = scnprintf(param_3,0x1000,&DAT_0010372f,uVar1);
  }
LAB_00111db0:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x638) == local_38) {
    return (long)iVar3;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long thermal_remove_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x7000000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x1c0));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void thermal_remove_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44 = 0;
  iVar2 = kstrtoint(param_3,10,&local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0x7000000000;
    local_2c = local_44;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long fake_temp_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x6f00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x1bc));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void fake_temp_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44 = 0;
  iVar2 = kstrtoint(param_3,10,&local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0x6f00000000;
    local_2c = local_44;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long fake_cycle_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x7c00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x1f0));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void fake_cycle_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44 = 0;
  iVar2 = kstrtoint(param_3,10,&local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0x7c00000000;
    local_2c = local_44;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long shutdown_delay_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x6e00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    if ((*(char *)(param_1 + 0xc90) == '\0') ||
       (iVar2 = *(int *)(param_1 + 0x724), iVar2 - 1U < 100)) {
      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x1b8) = 0;
      iVar2 = *(int *)(param_1 + 0x724);
    }
    _printk(&DAT_0010624f,"shutdown_delay_show",*(undefined4 *)(*(long *)(param_1 + 0x248) + 0x1b8),
            iVar2);
    iVar2 = scnprintf(param_3,0x1000,&DAT_0010372f,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x1b8));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void shutdown_delay_store
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_2c = 0;
  iVar2 = kstrtoint(param_3,10,&local_2c);
  lVar1 = sp_el0;
  if (iVar2 != 0) {
    param_4 = 0xffffffffffffffea;
  }
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(param_4);
}



void shipmode_count_reset_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44 = 0;
  iVar2 = kstrtoint(param_3,10,&local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0x7900000000;
    local_2c = local_44;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long sport_mode_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x7a00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x1e8));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void sport_mode_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54 = 0;
  iVar2 = kstrtoint(param_3,10,&local_54);
  if (iVar2 == 0) {
    _printk(&DAT_00104d37,"sport_mode_store",local_54);
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0x7a00000000;
    local_3c = local_54;
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long double85_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xf300000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x3cc));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void double85_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte local_44 [4];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  uint local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44[0] = 0;
  iVar2 = kstrtobool(param_3,local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0xf300000000;
    local_2c = (uint)local_44[0];
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long soh_new_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xf400000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x3d0));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long remove_temp_limit_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xf500000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x3d4));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void remove_temp_limit_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte local_44 [4];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  uint local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44[0] = 0;
  iVar2 = kstrtobool(param_3,local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0xf500000000;
    local_2c = (uint)local_44[0];
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long cc_short_vbus_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x7e00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_0010372f,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x1f8));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long otg_ui_support_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x7f00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_0010372f,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x1fc));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long cid_status_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x8000000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x200));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long cc_toggle_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x8100000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_0010372f,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x204));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void cc_toggle_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44 = 0;
  iVar2 = kstrtoint(param_3,10,&local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0x8100000000;
    local_2c = local_44;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long smart_chg_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x8200000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x208));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void smart_chg_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54 = 0;
  iVar2 = kstrtoint(param_3,0,&local_54);
  if (iVar2 == 0) {
    _printk(&DAT_00103bb9,"smart_chg_store",local_54);
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0x8200000000;
    local_3c = local_54;
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



void low_fast_para_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54 = 0;
  iVar2 = kstrtoint(param_3,10,&local_54);
  if (iVar2 == 0) {
    _printk(&DAT_00103785,"low_fast_para_store",local_54);
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0x8300000000;
    local_3c = local_54;
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



void lowfast_sw_para_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54 = 0;
  iVar2 = kstrtoint(param_3,10,&local_54);
  if (iVar2 == 0) {
    _printk(&DAT_0010492f,"lowfast_sw_para_store",local_54);
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0x8400000000;
    local_3c = local_54;
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long smart_sic_mode_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x8500000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x214));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long charger_user_value_map_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xc00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x30));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void charger_user_value_map_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54 = 0;
  iVar2 = kstrtouint(param_3,0,&local_54);
  if (iVar2 == 0) {
    _printk(&DAT_00104113,"charger_user_value_map_store",local_54);
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0xc00000000;
    local_3c = local_54;
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long two_ntc_parameter1_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xd00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x34));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void two_ntc_parameter1_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54 = 0;
  iVar2 = kstrtouint(param_3,0,&local_54);
  if (iVar2 == 0) {
    _printk(&DAT_001059a7,"two_ntc_parameter1_store",local_54);
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0xd00000000;
    local_3c = local_54;
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long two_ntc_parameter2_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xe00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x38));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void two_ntc_parameter2_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54 = 0;
  iVar2 = kstrtouint(param_3,0,&local_54);
  if (iVar2 == 0) {
    _printk(&DAT_00105502,"two_ntc_parameter2_store",local_54);
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0xe00000000;
    local_3c = local_54;
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long two_ntc_parameter3_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xf00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x3c));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void two_ntc_parameter3_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54 = 0;
  iVar2 = kstrtouint(param_3,0,&local_54);
  if (iVar2 == 0) {
    _printk(&DAT_00105c30,"two_ntc_parameter3_store",local_54);
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0xf00000000;
    local_3c = local_54;
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long two_ntc_parameter4_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x1000000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x40));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void two_ntc_parameter4_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54 = 0;
  iVar2 = kstrtouint(param_3,0,&local_54);
  if (iVar2 == 0) {
    _printk(&DAT_001037bc,"two_ntc_parameter4_store",local_54);
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0x1000000000;
    local_3c = local_54;
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long two_ntc_parameter5_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x1100000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x44));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void two_ntc_parameter5_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54 = 0;
  iVar2 = kstrtouint(param_3,0,&local_54);
  if (iVar2 == 0) {
    _printk(&DAT_00103f3d,"two_ntc_parameter5_store",local_54);
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0x1100000000;
    local_3c = local_54;
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long two_ntc_parameter6_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x1200000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x48));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void two_ntc_parameter6_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54 = 0;
  iVar2 = kstrtouint(param_3,0,&local_54);
  if (iVar2 == 0) {
    _printk(&DAT_001032fd,"two_ntc_parameter6_store",local_54);
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0x1200000000;
    local_3c = local_54;
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



void dot_test_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54 = 0;
  iVar2 = kstrtoint(param_3,10,&local_54);
  if (iVar2 == 0) {
    _printk(&DAT_00102b6e,"dot_test_store",local_54);
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0xed00000000;
    local_3c = local_54;
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long lpd_control_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xf700000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x3dc));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void lpd_control_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44 = 0;
  iVar2 = kstrtoint(param_3,0,&local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0xf700000000;
    local_2c = local_44;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long fg_vendor_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xee00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x3b8));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long pack_vendor_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = sp_el0;
  local_28 = *(long *)(lVar2 + 0x638);
  local_34 = 0xef00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar4 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar4) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x248) + 0x3bc);
    if (7 < uVar1) {
                    // WARNING: Does not return
      pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x113f7c);
      (*pcVar3)();
    }
    iVar4 = scnprintf(param_3,0x1000,&DAT_00105295,(&POWER_SUPPLY_VENDOR_TEXT)[uVar1]);
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x638) == local_28) {
    return (long)iVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long cell_vendor_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = sp_el0;
  local_28 = *(long *)(lVar2 + 0x638);
  local_34 = 0xf000000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar4 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar4) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x248) + 0x3c0);
    if (10 < uVar1) {
                    // WARNING: Does not return
      pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x114040);
      (*pcVar3)();
    }
    iVar4 = scnprintf(param_3,0x1000,&DAT_00105295,(&POWER_SUPPLY_CELL_VENDOR_TEXT)[uVar1]);
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x638) == local_28) {
    return (long)iVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long fg1_qmax_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xb500000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x2d4));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long fg1_rm_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xb600000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x2d8));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long fg1_fcc_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xb700000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x2dc));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long fg1_soh_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xb800000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x2e0));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long fg1_rsoc_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xc200000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x308));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long fg1_ai_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xc300000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x30c));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long fg1_fcc_soh_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xb900000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x2e4));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long fg1_cycle_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xba00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x2e8));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long fg1_fastcharge_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xbb00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x2ec));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long fg1_current_max_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xbc00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x2f0));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long fg1_vol_max_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xbd00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x2f4));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long fg1_tsim_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xbe00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x2f8));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long fg1_tambient_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xbf00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x2fc));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long fg1_tremq_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xc000000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x300));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long fg1_tfullq_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xc100000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x304));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long fg1_temp_max_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xc600000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x318));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long fg2_temp_max_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xc700000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x31c));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long fg1_time_ot_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xc900000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x324));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long fg1_time_ht_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xc800000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,*(undefined4 *)(*(long *)(param_1 + 0x248) + 800)
                     );
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long fg1_seal_set_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xca00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x328));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void fg1_seal_set_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54 = 0;
  iVar2 = kstrtoint(param_3,0,&local_54);
  if (iVar2 == 0) {
    _printk(&DAT_0010587f,"fg1_seal_set_store",local_54);
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0xca00000000;
    local_3c = local_54;
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long fg1_seal_state_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xcb00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x32c));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long fg1_df_check_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xcc00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00105553,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x330));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long batt_sn_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x638);
  uStack_100 = 0;
  local_118 = 0x10000800a;
  local_110 = *(undefined4 *)(param_1 + 0x254);
  local_108 = 8;
  local_40 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_f8 = 0;
  uStack_10c = 0x55;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_118,0xdc);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00105295,param_1 + 3000);
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_38) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long max_life_vol_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xcd00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x334));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long max_life_temp_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xce00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x338));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long over_vol_duration_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xcf00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x33c));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long fg1_imax_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xec00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x3b0));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long fg1_oritemp_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xe200000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x388));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long battmoni_isc_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x8700000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x21c));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long battmoni_soa_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x8800000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x220));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long over_peak_flag_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x8900000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x224));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long current_deviation_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x8a00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x228));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long power_deviation_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x8b00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x22c));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long average_current_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x8c00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x230));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long average_temp_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x8d00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x234));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long start_learn_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x8e00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x238));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void start_learn_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44 = 0;
  iVar2 = kstrtoint(param_3,10,&local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0x8e00000000;
    local_2c = local_44;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long stop_learn_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x8f00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x23c));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void stop_learn_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44 = 0;
  iVar2 = kstrtoint(param_3,10,&local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0x8f00000000;
    local_2c = local_44;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long set_learn_power_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x9000000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x240));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void set_learn_power_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44 = 0;
  iVar2 = kstrtoint(param_3,10,&local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0x9000000000;
    local_2c = local_44;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long get_learn_power_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x9100000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x244));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long get_learn_power_dev_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x9200000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x248));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long get_learn_time_dev_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x9300000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x24c));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long constant_power_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x9400000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x250));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void constant_power_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44 = 0;
  iVar2 = kstrtoint(param_3,10,&local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0x9400000000;
    local_2c = local_44;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long remaining_time_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x9500000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x254));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long referance_power_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x9600000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,*(undefined4 *)(*(long *)(param_1 + 0x248) + 600)
                     );
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void referance_power_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44 = 0;
  iVar2 = kstrtoint(param_3,10,&local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0x9600000000;
    local_2c = local_44;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long nvt_referance_current_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x9700000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x25c));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long nvt_referance_power_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x9800000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x260));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long start_learn_b_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x9900000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x264));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void start_learn_b_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44 = 0;
  iVar2 = kstrtoint(param_3,10,&local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0x9900000000;
    local_2c = local_44;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long stop_learn_b_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x9a00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x268));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void stop_learn_b_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44 = 0;
  iVar2 = kstrtoint(param_3,10,&local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0x9a00000000;
    local_2c = local_44;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long set_learn_power_b_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x9b00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x26c));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void set_learn_power_b_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44 = 0;
  iVar2 = kstrtoint(param_3,10,&local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0x9b00000000;
    local_2c = local_44;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long get_learn_power_b_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x9c00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x270));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long get_learn_power_dev_b_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x9d00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x274));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long has_dp_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xf600000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x3d8));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long sbu1_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xf800000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x3e0));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void sbu1_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44 = 0;
  iVar2 = kstrtoint(param_3,10,&local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0xf800000000;
    local_2c = local_44;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long sbu2_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xf900000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x3e4));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long cc1_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xfa00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 1000));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long cc2_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xfb00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x3ec));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long plate_shock_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xfc00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x3f0));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void plate_shock_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44 = 0;
  iVar2 = kstrtoint(param_3,10,&local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0xfc00000000;
    local_2c = local_44;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long cloud_dynamic_shutdown_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x638);
  uStack_100 = 0;
  local_118 = 0x10000800a;
  local_110 = *(undefined4 *)(param_1 + 0x254);
  local_108 = 2;
  local_40 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_f8 = 0;
  uStack_10c = 0x55;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_118,0xdc);
  if (-1 < iVar2) {
    _printk(&DAT_00104994,"cloud_dynamic_shutdown_show",param_1 + 0x898);
    iVar2 = scnprintf(param_3,0x1000,&DAT_0010392a,param_1 + 0x898);
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_38) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void cloud_dynamic_shutdown_store(long param_1,undefined8 param_2,char *param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined1 local_118;
  char local_117 [199];
  uint uStack_50;
  long local_48;
  
  lVar1 = sp_el0;
  local_48 = *(long *)(lVar1 + 0x638);
  uStack_50 = 0;
  _printk(&DAT_0010450e,"cloud_dynamic_shutdown_store");
  local_117[0] = '\0';
  local_117[1] = '\0';
  local_117[2] = '\0';
  local_117[3] = '\0';
  local_117[4] = '\0';
  local_117[5] = '\0';
  local_117[6] = '\0';
  local_117[7] = '\0';
  local_118 = 2;
  local_120 = *(undefined4 *)(param_1 + 600);
  local_128 = 0x10000800a;
  local_117[8] = '\0';
  local_117[9] = '\0';
  local_117[10] = '\0';
  local_117[0xb] = '\0';
  local_117[0xc] = '\0';
  local_117[0xd] = '\0';
  local_117[0xe] = '\0';
  local_117[0xf] = '\0';
  uStack_11c = 0x55;
  local_117[0x10] = '\0';
  local_117[0x11] = '\0';
  local_117[0x12] = '\0';
  local_117[0x13] = '\0';
  local_117[0x14] = '\0';
  local_117[0x15] = '\0';
  local_117[0x16] = '\0';
  local_117[0x17] = '\0';
  local_117[0x18] = '\0';
  local_117[0x19] = '\0';
  local_117[0x1a] = '\0';
  local_117[0x1b] = '\0';
  local_117[0x1c] = '\0';
  local_117[0x1d] = '\0';
  local_117[0x1e] = '\0';
  local_117[0x1f] = '\0';
  local_117[0x20] = '\0';
  local_117[0x21] = '\0';
  local_117[0x22] = '\0';
  local_117[0x23] = '\0';
  local_117[0x24] = '\0';
  local_117[0x25] = '\0';
  local_117[0x26] = '\0';
  local_117[0x27] = '\0';
  local_117[0x28] = '\0';
  local_117[0x29] = '\0';
  local_117[0x2a] = '\0';
  local_117[0x2b] = '\0';
  local_117[0x2c] = '\0';
  local_117[0x2d] = '\0';
  local_117[0x2e] = '\0';
  local_117[0x2f] = '\0';
  local_117[0x30] = '\0';
  local_117[0x31] = '\0';
  local_117[0x32] = '\0';
  local_117[0x33] = '\0';
  local_117[0x34] = '\0';
  local_117[0x35] = '\0';
  local_117[0x36] = '\0';
  local_117[0x37] = '\0';
  local_117[0x38] = '\0';
  local_117[0x39] = '\0';
  local_117[0x3a] = '\0';
  local_117[0x3b] = '\0';
  local_117[0x3c] = '\0';
  local_117[0x3d] = '\0';
  local_117[0x3e] = '\0';
  local_117[0x3f] = '\0';
  local_117[0x40] = '\0';
  local_117[0x41] = '\0';
  local_117[0x42] = '\0';
  local_117[0x43] = '\0';
  local_117[0x44] = '\0';
  local_117[0x45] = '\0';
  local_117[0x46] = '\0';
  local_117[0x47] = '\0';
  local_117[0x48] = '\0';
  local_117[0x49] = '\0';
  local_117[0x4a] = '\0';
  local_117[0x4b] = '\0';
  local_117[0x4c] = '\0';
  local_117[0x4d] = '\0';
  local_117[0x4e] = '\0';
  local_117[0x4f] = '\0';
  local_117[0x50] = '\0';
  local_117[0x51] = '\0';
  local_117[0x52] = '\0';
  local_117[0x53] = '\0';
  local_117[0x54] = '\0';
  local_117[0x55] = '\0';
  local_117[0x56] = '\0';
  local_117[0x57] = '\0';
  local_117[0x58] = '\0';
  local_117[0x59] = '\0';
  local_117[0x5a] = '\0';
  local_117[0x5b] = '\0';
  local_117[0x5c] = '\0';
  local_117[0x5d] = '\0';
  local_117[0x5e] = '\0';
  local_117[0x5f] = '\0';
  local_117[0x60] = '\0';
  local_117[0x61] = '\0';
  local_117[0x62] = '\0';
  local_117[99] = '\0';
  local_117[100] = '\0';
  local_117[0x65] = '\0';
  local_117[0x66] = '\0';
  local_117[0x67] = '\0';
  local_117[0x68] = '\0';
  local_117[0x69] = '\0';
  local_117[0x6a] = '\0';
  local_117[0x6b] = '\0';
  local_117[0x6c] = '\0';
  local_117[0x6d] = '\0';
  local_117[0x6e] = '\0';
  local_117[0x6f] = '\0';
  local_117[0x70] = '\0';
  local_117[0x71] = '\0';
  local_117[0x72] = '\0';
  local_117[0x73] = '\0';
  local_117[0x74] = '\0';
  local_117[0x75] = '\0';
  local_117[0x76] = '\0';
  local_117[0x77] = '\0';
  local_117[0x78] = '\0';
  local_117[0x79] = '\0';
  local_117[0x7a] = '\0';
  local_117[0x7b] = '\0';
  local_117[0x7c] = '\0';
  local_117[0x7d] = '\0';
  local_117[0x7e] = '\0';
  local_117[0x7f] = '\0';
  local_117[0x80] = '\0';
  local_117[0x81] = '\0';
  local_117[0x82] = '\0';
  local_117[0x83] = '\0';
  local_117[0x84] = '\0';
  local_117[0x85] = '\0';
  local_117[0x86] = '\0';
  local_117[0x87] = '\0';
  local_117[0x88] = '\0';
  local_117[0x89] = '\0';
  local_117[0x8a] = '\0';
  local_117[0x8b] = '\0';
  local_117[0x8c] = '\0';
  local_117[0x8d] = '\0';
  local_117[0x8e] = '\0';
  local_117[0x8f] = '\0';
  local_117[0x90] = '\0';
  local_117[0x91] = '\0';
  local_117[0x92] = '\0';
  local_117[0x93] = '\0';
  local_117[0x94] = '\0';
  local_117[0x95] = '\0';
  local_117[0x96] = '\0';
  local_117[0x97] = '\0';
  local_117[0x98] = '\0';
  local_117[0x99] = '\0';
  local_117[0x9a] = '\0';
  local_117[0x9b] = '\0';
  local_117[0x9c] = '\0';
  local_117[0x9d] = '\0';
  local_117[0x9e] = '\0';
  local_117[0x9f] = '\0';
  local_117[0xa0] = '\0';
  local_117[0xa1] = '\0';
  local_117[0xa2] = '\0';
  local_117[0xa3] = '\0';
  local_117[0xa4] = '\0';
  local_117[0xa5] = '\0';
  local_117[0xa6] = '\0';
  local_117[0xa7] = '\0';
  local_117[0xa8] = '\0';
  local_117[0xa9] = '\0';
  local_117[0xaa] = '\0';
  local_117[0xab] = '\0';
  local_117[0xac] = '\0';
  local_117[0xad] = '\0';
  local_117[0xae] = '\0';
  local_117[0xaf] = '\0';
  local_117[0xb0] = '\0';
  local_117[0xb1] = '\0';
  local_117[0xb2] = '\0';
  local_117[0xb3] = '\0';
  local_117[0xb4] = '\0';
  local_117[0xb5] = '\0';
  local_117[0xb6] = '\0';
  local_117[0xb7] = '\0';
  local_117[0xb8] = '\0';
  local_117[0xb9] = '\0';
  local_117[0xba] = '\0';
  local_117[0xbb] = '\0';
  local_117[0xbc] = '\0';
  local_117[0xbd] = '\0';
  local_117[0xbe] = '\0';
  local_117[0xbf] = '\0';
  local_117[0xc0] = '\0';
  local_117[0xc1] = '\0';
  local_117[0xc2] = '\0';
  local_117[0xc3] = '\0';
  local_117[0xc4] = '\0';
  local_117[0xc5] = '\0';
  local_117[0xc6] = '\0';
  uStack_50 = uStack_50 & 0xffffff00;
  if (param_4 < 0xc9) {
    strncpy(local_117,param_3,param_4);
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_128,0xdc);
    lVar1 = sp_el0;
    uVar3 = (long)iVar2;
    if (-1 < iVar2) {
      uVar3 = param_4;
    }
    if (*(long *)(lVar1 + 0x638) == local_48) {
      return;
    }
  }
  else {
    uVar3 = fortify_panic("strncpy");
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar3);
}



long ui_soh_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x638);
  uStack_100 = 0;
  local_118 = 0x10000800a;
  local_110 = *(undefined4 *)(param_1 + 0x254);
  local_108 = 3;
  local_40 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_f8 = 0;
  uStack_10c = 0x55;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_118,0xdc);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_0010392a,param_1 + 0x960);
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_38) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void ui_soh_store(long param_1,undefined8 param_2,char *param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined1 local_118;
  char local_117 [199];
  uint uStack_50;
  long local_48;
  
  lVar1 = sp_el0;
  local_48 = *(long *)(lVar1 + 0x638);
  uStack_50 = 0;
  _printk(&DAT_00102bdf,"ui_soh_store");
  local_117[0] = '\0';
  local_117[1] = '\0';
  local_117[2] = '\0';
  local_117[3] = '\0';
  local_117[4] = '\0';
  local_117[5] = '\0';
  local_117[6] = '\0';
  local_117[7] = '\0';
  local_118 = 3;
  local_120 = *(undefined4 *)(param_1 + 600);
  local_128 = 0x10000800a;
  local_117[8] = '\0';
  local_117[9] = '\0';
  local_117[10] = '\0';
  local_117[0xb] = '\0';
  local_117[0xc] = '\0';
  local_117[0xd] = '\0';
  local_117[0xe] = '\0';
  local_117[0xf] = '\0';
  uStack_11c = 0x55;
  local_117[0x10] = '\0';
  local_117[0x11] = '\0';
  local_117[0x12] = '\0';
  local_117[0x13] = '\0';
  local_117[0x14] = '\0';
  local_117[0x15] = '\0';
  local_117[0x16] = '\0';
  local_117[0x17] = '\0';
  local_117[0x18] = '\0';
  local_117[0x19] = '\0';
  local_117[0x1a] = '\0';
  local_117[0x1b] = '\0';
  local_117[0x1c] = '\0';
  local_117[0x1d] = '\0';
  local_117[0x1e] = '\0';
  local_117[0x1f] = '\0';
  local_117[0x20] = '\0';
  local_117[0x21] = '\0';
  local_117[0x22] = '\0';
  local_117[0x23] = '\0';
  local_117[0x24] = '\0';
  local_117[0x25] = '\0';
  local_117[0x26] = '\0';
  local_117[0x27] = '\0';
  local_117[0x28] = '\0';
  local_117[0x29] = '\0';
  local_117[0x2a] = '\0';
  local_117[0x2b] = '\0';
  local_117[0x2c] = '\0';
  local_117[0x2d] = '\0';
  local_117[0x2e] = '\0';
  local_117[0x2f] = '\0';
  local_117[0x30] = '\0';
  local_117[0x31] = '\0';
  local_117[0x32] = '\0';
  local_117[0x33] = '\0';
  local_117[0x34] = '\0';
  local_117[0x35] = '\0';
  local_117[0x36] = '\0';
  local_117[0x37] = '\0';
  local_117[0x38] = '\0';
  local_117[0x39] = '\0';
  local_117[0x3a] = '\0';
  local_117[0x3b] = '\0';
  local_117[0x3c] = '\0';
  local_117[0x3d] = '\0';
  local_117[0x3e] = '\0';
  local_117[0x3f] = '\0';
  local_117[0x40] = '\0';
  local_117[0x41] = '\0';
  local_117[0x42] = '\0';
  local_117[0x43] = '\0';
  local_117[0x44] = '\0';
  local_117[0x45] = '\0';
  local_117[0x46] = '\0';
  local_117[0x47] = '\0';
  local_117[0x48] = '\0';
  local_117[0x49] = '\0';
  local_117[0x4a] = '\0';
  local_117[0x4b] = '\0';
  local_117[0x4c] = '\0';
  local_117[0x4d] = '\0';
  local_117[0x4e] = '\0';
  local_117[0x4f] = '\0';
  local_117[0x50] = '\0';
  local_117[0x51] = '\0';
  local_117[0x52] = '\0';
  local_117[0x53] = '\0';
  local_117[0x54] = '\0';
  local_117[0x55] = '\0';
  local_117[0x56] = '\0';
  local_117[0x57] = '\0';
  local_117[0x58] = '\0';
  local_117[0x59] = '\0';
  local_117[0x5a] = '\0';
  local_117[0x5b] = '\0';
  local_117[0x5c] = '\0';
  local_117[0x5d] = '\0';
  local_117[0x5e] = '\0';
  local_117[0x5f] = '\0';
  local_117[0x60] = '\0';
  local_117[0x61] = '\0';
  local_117[0x62] = '\0';
  local_117[99] = '\0';
  local_117[100] = '\0';
  local_117[0x65] = '\0';
  local_117[0x66] = '\0';
  local_117[0x67] = '\0';
  local_117[0x68] = '\0';
  local_117[0x69] = '\0';
  local_117[0x6a] = '\0';
  local_117[0x6b] = '\0';
  local_117[0x6c] = '\0';
  local_117[0x6d] = '\0';
  local_117[0x6e] = '\0';
  local_117[0x6f] = '\0';
  local_117[0x70] = '\0';
  local_117[0x71] = '\0';
  local_117[0x72] = '\0';
  local_117[0x73] = '\0';
  local_117[0x74] = '\0';
  local_117[0x75] = '\0';
  local_117[0x76] = '\0';
  local_117[0x77] = '\0';
  local_117[0x78] = '\0';
  local_117[0x79] = '\0';
  local_117[0x7a] = '\0';
  local_117[0x7b] = '\0';
  local_117[0x7c] = '\0';
  local_117[0x7d] = '\0';
  local_117[0x7e] = '\0';
  local_117[0x7f] = '\0';
  local_117[0x80] = '\0';
  local_117[0x81] = '\0';
  local_117[0x82] = '\0';
  local_117[0x83] = '\0';
  local_117[0x84] = '\0';
  local_117[0x85] = '\0';
  local_117[0x86] = '\0';
  local_117[0x87] = '\0';
  local_117[0x88] = '\0';
  local_117[0x89] = '\0';
  local_117[0x8a] = '\0';
  local_117[0x8b] = '\0';
  local_117[0x8c] = '\0';
  local_117[0x8d] = '\0';
  local_117[0x8e] = '\0';
  local_117[0x8f] = '\0';
  local_117[0x90] = '\0';
  local_117[0x91] = '\0';
  local_117[0x92] = '\0';
  local_117[0x93] = '\0';
  local_117[0x94] = '\0';
  local_117[0x95] = '\0';
  local_117[0x96] = '\0';
  local_117[0x97] = '\0';
  local_117[0x98] = '\0';
  local_117[0x99] = '\0';
  local_117[0x9a] = '\0';
  local_117[0x9b] = '\0';
  local_117[0x9c] = '\0';
  local_117[0x9d] = '\0';
  local_117[0x9e] = '\0';
  local_117[0x9f] = '\0';
  local_117[0xa0] = '\0';
  local_117[0xa1] = '\0';
  local_117[0xa2] = '\0';
  local_117[0xa3] = '\0';
  local_117[0xa4] = '\0';
  local_117[0xa5] = '\0';
  local_117[0xa6] = '\0';
  local_117[0xa7] = '\0';
  local_117[0xa8] = '\0';
  local_117[0xa9] = '\0';
  local_117[0xaa] = '\0';
  local_117[0xab] = '\0';
  local_117[0xac] = '\0';
  local_117[0xad] = '\0';
  local_117[0xae] = '\0';
  local_117[0xaf] = '\0';
  local_117[0xb0] = '\0';
  local_117[0xb1] = '\0';
  local_117[0xb2] = '\0';
  local_117[0xb3] = '\0';
  local_117[0xb4] = '\0';
  local_117[0xb5] = '\0';
  local_117[0xb6] = '\0';
  local_117[0xb7] = '\0';
  local_117[0xb8] = '\0';
  local_117[0xb9] = '\0';
  local_117[0xba] = '\0';
  local_117[0xbb] = '\0';
  local_117[0xbc] = '\0';
  local_117[0xbd] = '\0';
  local_117[0xbe] = '\0';
  local_117[0xbf] = '\0';
  local_117[0xc0] = '\0';
  local_117[0xc1] = '\0';
  local_117[0xc2] = '\0';
  local_117[0xc3] = '\0';
  local_117[0xc4] = '\0';
  local_117[0xc5] = '\0';
  local_117[0xc6] = '\0';
  uStack_50 = uStack_50 & 0xffffff00;
  if (param_4 < 0xc9) {
    strncpy(local_117,param_3,param_4);
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_128,0xdc);
    lVar1 = sp_el0;
    uVar3 = (long)iVar2;
    if (-1 < iVar2) {
      uVar3 = param_4;
    }
    if (*(long *)(lVar1 + 0x638) == local_48) {
      return;
    }
  }
  else {
    uVar3 = fortify_panic("strncpy");
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar3);
}



long ui_slave_soh_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x638);
  uStack_100 = 0;
  local_118 = 0x10000800a;
  local_110 = *(undefined4 *)(param_1 + 0x254);
  local_108 = 4;
  local_40 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_f8 = 0;
  uStack_10c = 0x55;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_118,0xdc);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_0010392a,param_1 + 0xa28);
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_38) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void ui_slave_soh_store(long param_1,undefined8 param_2,char *param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined1 local_118;
  char local_117 [199];
  uint uStack_50;
  long local_48;
  
  lVar1 = sp_el0;
  local_48 = *(long *)(lVar1 + 0x638);
  uStack_50 = 0;
  _printk(&DAT_00106315,"ui_slave_soh_store");
  local_117[0] = '\0';
  local_117[1] = '\0';
  local_117[2] = '\0';
  local_117[3] = '\0';
  local_117[4] = '\0';
  local_117[5] = '\0';
  local_117[6] = '\0';
  local_117[7] = '\0';
  local_118 = 4;
  local_120 = *(undefined4 *)(param_1 + 600);
  local_128 = 0x10000800a;
  local_117[8] = '\0';
  local_117[9] = '\0';
  local_117[10] = '\0';
  local_117[0xb] = '\0';
  local_117[0xc] = '\0';
  local_117[0xd] = '\0';
  local_117[0xe] = '\0';
  local_117[0xf] = '\0';
  uStack_11c = 0x55;
  local_117[0x10] = '\0';
  local_117[0x11] = '\0';
  local_117[0x12] = '\0';
  local_117[0x13] = '\0';
  local_117[0x14] = '\0';
  local_117[0x15] = '\0';
  local_117[0x16] = '\0';
  local_117[0x17] = '\0';
  local_117[0x18] = '\0';
  local_117[0x19] = '\0';
  local_117[0x1a] = '\0';
  local_117[0x1b] = '\0';
  local_117[0x1c] = '\0';
  local_117[0x1d] = '\0';
  local_117[0x1e] = '\0';
  local_117[0x1f] = '\0';
  local_117[0x20] = '\0';
  local_117[0x21] = '\0';
  local_117[0x22] = '\0';
  local_117[0x23] = '\0';
  local_117[0x24] = '\0';
  local_117[0x25] = '\0';
  local_117[0x26] = '\0';
  local_117[0x27] = '\0';
  local_117[0x28] = '\0';
  local_117[0x29] = '\0';
  local_117[0x2a] = '\0';
  local_117[0x2b] = '\0';
  local_117[0x2c] = '\0';
  local_117[0x2d] = '\0';
  local_117[0x2e] = '\0';
  local_117[0x2f] = '\0';
  local_117[0x30] = '\0';
  local_117[0x31] = '\0';
  local_117[0x32] = '\0';
  local_117[0x33] = '\0';
  local_117[0x34] = '\0';
  local_117[0x35] = '\0';
  local_117[0x36] = '\0';
  local_117[0x37] = '\0';
  local_117[0x38] = '\0';
  local_117[0x39] = '\0';
  local_117[0x3a] = '\0';
  local_117[0x3b] = '\0';
  local_117[0x3c] = '\0';
  local_117[0x3d] = '\0';
  local_117[0x3e] = '\0';
  local_117[0x3f] = '\0';
  local_117[0x40] = '\0';
  local_117[0x41] = '\0';
  local_117[0x42] = '\0';
  local_117[0x43] = '\0';
  local_117[0x44] = '\0';
  local_117[0x45] = '\0';
  local_117[0x46] = '\0';
  local_117[0x47] = '\0';
  local_117[0x48] = '\0';
  local_117[0x49] = '\0';
  local_117[0x4a] = '\0';
  local_117[0x4b] = '\0';
  local_117[0x4c] = '\0';
  local_117[0x4d] = '\0';
  local_117[0x4e] = '\0';
  local_117[0x4f] = '\0';
  local_117[0x50] = '\0';
  local_117[0x51] = '\0';
  local_117[0x52] = '\0';
  local_117[0x53] = '\0';
  local_117[0x54] = '\0';
  local_117[0x55] = '\0';
  local_117[0x56] = '\0';
  local_117[0x57] = '\0';
  local_117[0x58] = '\0';
  local_117[0x59] = '\0';
  local_117[0x5a] = '\0';
  local_117[0x5b] = '\0';
  local_117[0x5c] = '\0';
  local_117[0x5d] = '\0';
  local_117[0x5e] = '\0';
  local_117[0x5f] = '\0';
  local_117[0x60] = '\0';
  local_117[0x61] = '\0';
  local_117[0x62] = '\0';
  local_117[99] = '\0';
  local_117[100] = '\0';
  local_117[0x65] = '\0';
  local_117[0x66] = '\0';
  local_117[0x67] = '\0';
  local_117[0x68] = '\0';
  local_117[0x69] = '\0';
  local_117[0x6a] = '\0';
  local_117[0x6b] = '\0';
  local_117[0x6c] = '\0';
  local_117[0x6d] = '\0';
  local_117[0x6e] = '\0';
  local_117[0x6f] = '\0';
  local_117[0x70] = '\0';
  local_117[0x71] = '\0';
  local_117[0x72] = '\0';
  local_117[0x73] = '\0';
  local_117[0x74] = '\0';
  local_117[0x75] = '\0';
  local_117[0x76] = '\0';
  local_117[0x77] = '\0';
  local_117[0x78] = '\0';
  local_117[0x79] = '\0';
  local_117[0x7a] = '\0';
  local_117[0x7b] = '\0';
  local_117[0x7c] = '\0';
  local_117[0x7d] = '\0';
  local_117[0x7e] = '\0';
  local_117[0x7f] = '\0';
  local_117[0x80] = '\0';
  local_117[0x81] = '\0';
  local_117[0x82] = '\0';
  local_117[0x83] = '\0';
  local_117[0x84] = '\0';
  local_117[0x85] = '\0';
  local_117[0x86] = '\0';
  local_117[0x87] = '\0';
  local_117[0x88] = '\0';
  local_117[0x89] = '\0';
  local_117[0x8a] = '\0';
  local_117[0x8b] = '\0';
  local_117[0x8c] = '\0';
  local_117[0x8d] = '\0';
  local_117[0x8e] = '\0';
  local_117[0x8f] = '\0';
  local_117[0x90] = '\0';
  local_117[0x91] = '\0';
  local_117[0x92] = '\0';
  local_117[0x93] = '\0';
  local_117[0x94] = '\0';
  local_117[0x95] = '\0';
  local_117[0x96] = '\0';
  local_117[0x97] = '\0';
  local_117[0x98] = '\0';
  local_117[0x99] = '\0';
  local_117[0x9a] = '\0';
  local_117[0x9b] = '\0';
  local_117[0x9c] = '\0';
  local_117[0x9d] = '\0';
  local_117[0x9e] = '\0';
  local_117[0x9f] = '\0';
  local_117[0xa0] = '\0';
  local_117[0xa1] = '\0';
  local_117[0xa2] = '\0';
  local_117[0xa3] = '\0';
  local_117[0xa4] = '\0';
  local_117[0xa5] = '\0';
  local_117[0xa6] = '\0';
  local_117[0xa7] = '\0';
  local_117[0xa8] = '\0';
  local_117[0xa9] = '\0';
  local_117[0xaa] = '\0';
  local_117[0xab] = '\0';
  local_117[0xac] = '\0';
  local_117[0xad] = '\0';
  local_117[0xae] = '\0';
  local_117[0xaf] = '\0';
  local_117[0xb0] = '\0';
  local_117[0xb1] = '\0';
  local_117[0xb2] = '\0';
  local_117[0xb3] = '\0';
  local_117[0xb4] = '\0';
  local_117[0xb5] = '\0';
  local_117[0xb6] = '\0';
  local_117[0xb7] = '\0';
  local_117[0xb8] = '\0';
  local_117[0xb9] = '\0';
  local_117[0xba] = '\0';
  local_117[0xbb] = '\0';
  local_117[0xbc] = '\0';
  local_117[0xbd] = '\0';
  local_117[0xbe] = '\0';
  local_117[0xbf] = '\0';
  local_117[0xc0] = '\0';
  local_117[0xc1] = '\0';
  local_117[0xc2] = '\0';
  local_117[0xc3] = '\0';
  local_117[0xc4] = '\0';
  local_117[0xc5] = '\0';
  local_117[0xc6] = '\0';
  uStack_50 = uStack_50 & 0xffffff00;
  if (param_4 < 0xc9) {
    strncpy(local_117,param_3,param_4);
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_128,0xdc);
    lVar1 = sp_el0;
    uVar3 = (long)iVar2;
    if (-1 < iVar2) {
      uVar3 = param_4;
    }
    if (*(long *)(lVar1 + 0x638) == local_48) {
      return;
    }
  }
  else {
    uVar3 = fortify_panic("strncpy");
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar3);
}



long soh_sn_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x638);
  uStack_100 = 0;
  local_118 = 0x10000800a;
  local_110 = *(undefined4 *)(param_1 + 0x254);
  local_108 = 5;
  local_40 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_f8 = 0;
  uStack_10c = 0x55;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_118,0xdc);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_0010392a,param_1 + 0x960);
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_38) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long fg2_soh_sn_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x638);
  uStack_100 = 0;
  local_118 = 0x10000800a;
  local_110 = *(undefined4 *)(param_1 + 0x254);
  local_108 = 6;
  local_40 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_f8 = 0;
  uStack_10c = 0x55;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_118,0xdc);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_0010392a,param_1 + 0xa28);
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_38) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long calc_rvalue_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xfd00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x3f4));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long dp_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xfe00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x3f8));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long dm_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xff00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x3fc));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long dis_uart_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x10000000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x400));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void dis_uart_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44 = 0;
  iVar2 = kstrtoint(param_3,10,&local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0x10000000000;
    local_2c = local_44;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long lpd_charging_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x10100000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x404));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void lpd_charging_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44 = 0;
  iVar2 = kstrtoint(param_3,10,&local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0x10100000000;
    local_2c = local_44;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long maxtemp_occurtime_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x10200000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x408));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long runtime_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x10300000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x40c));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long maxtemptime_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x10400000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x410));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long handle_state_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x10500000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x414));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void handle_state_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44 = 0;
  iVar2 = kstrtoint(param_3,10,&local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0x10500000000;
    local_2c = local_44;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long handle_stop_charging_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x10600000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x418));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void handle_stop_charging_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44 = 0;
  iVar2 = kstrtoint(param_3,10,&local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0x10600000000;
    local_2c = local_44;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long dod_count_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xf100000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x3c4));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void dod_count_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54 = 0;
  iVar2 = kstrtoint(param_3,0,&local_54);
  if (iVar2 == 0) {
    _printk(&DAT_00104c3a,"dod_count_store",local_54);
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0xf100000000;
    local_3c = local_54;
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long dod_countLT_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0xf200000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x3c8));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void dod_countLT_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = sp_el0;
  local_38 = *(long *)(lVar3 + 0x638);
  local_54 = 0;
  iVar2 = kstrtoint(param_3,0,&local_54);
  if (iVar2 == 0) {
    _printk(&DAT_001039d9,"dod_countLT_store",local_54);
    local_48 = *(undefined4 *)(param_1 + 600);
    local_44 = 0xf200000000;
    local_3c = local_54;
    local_50 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_50,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long qbg_curr_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x10a00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x428));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long ut_test_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  size_t sVar6;
  size_t sVar7;
  undefined *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  long local_58;
  
  lVar3 = sp_el0;
  local_58 = *(long *)(lVar3 + 0x638);
  sVar6 = strnlen((char *)&ut_test_show_str,0x401);
  if (0x401 < sVar6) goto LAB_00118a2c;
  if (sVar6 == 0) {
    if (*(char *)(param_1 + 0xcbb) == '\0') goto switchD_00118864_caseD_1;
    local_68 = *(undefined4 *)(param_1 + 0x254);
    uVar9 = *(undefined8 *)(*(long *)(param_1 + -8) + 0x2e8);
    local_64 = 0x2200000000;
    local_5c = 0;
    local_70 = 0x10000800a;
    iVar5 = battery_chg_write(param_1 + -8,(long)&local_70,0x18);
    if (iVar5 < 0) {
      puVar8 = &DAT_00104d95;
LAB_00118800:
      _printk(puVar8,"ut_test_parse",iVar5);
    }
    else {
      local_68 = *(undefined4 *)(param_1 + 0x254);
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x88);
      local_64 = 0xef00000000;
      local_5c = 0;
      local_70 = 0x10000800a;
      iVar5 = battery_chg_write(param_1 + -8,(long)&local_70,0x18);
      if (iVar5 < 0) {
        puVar8 = &DAT_00105310;
        goto LAB_00118800;
      }
      uVar2 = *(uint *)(*(long *)(param_1 + 0x248) + 0x3bc);
      if (7 < uVar2) {
                    // WARNING: Does not return
        pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x118a4c);
        (*pcVar4)();
      }
      pcVar10 = (&POWER_SUPPLY_VENDOR_TEXT)[uVar2];
      _printk(&DAT_0010333c,"ut_test_parse",uVar1,pcVar10);
      switch(uVar1) {
      case 0:
        *(undefined8 *)(param_1 + 0xcc0) = *(undefined8 *)(param_1 + 0xd08);
        *(undefined8 *)(param_1 + 0xcc8) = *(undefined8 *)(param_1 + 0xd10);
        *(undefined8 *)(param_1 + 0xcd8) = *(undefined8 *)(param_1 + 0xd18);
        iVar5 = strncmp(pcVar10,"NVT",3);
        if ((iVar5 == 0) &&
           (*(undefined8 *)(param_1 + 0xcd0) = *(undefined8 *)(param_1 + 0xd20),
           *(char *)(param_1 + 0xd98) != '\0')) {
          of_property_read_string(uVar9,"mi,cycle_volt_cn_nvt",param_1 + 0xcc0);
        }
        iVar5 = strncmp(pcVar10,"SUNWODA",7);
        if ((iVar5 == 0) &&
           (*(undefined8 *)(param_1 + 0xcd0) = *(undefined8 *)(param_1 + 0xd28),
           *(char *)(param_1 + 0xd98) != '\0')) {
          pcVar10 = "mi,cycle_volt_cn_sunwoda";
LAB_00118a1c:
          of_property_read_string(uVar9,pcVar10,param_1 + 0xcc0);
        }
        break;
      case 2:
        *(undefined8 *)(param_1 + 0xcc0) = *(undefined8 *)(param_1 + 0xce0);
        *(undefined8 *)(param_1 + 0xcc8) = *(undefined8 *)(param_1 + 0xce8);
        *(undefined8 *)(param_1 + 0xcd8) = *(undefined8 *)(param_1 + 0xcf0);
        iVar5 = strncmp(pcVar10,"NVT",3);
        if (iVar5 == 0) {
          *(undefined8 *)(param_1 + 0xcd0) = *(undefined8 *)(param_1 + 0xcf8);
        }
        iVar5 = strncmp(pcVar10,"SUNWODA",7);
        if (iVar5 == 0) {
          *(undefined8 *)(param_1 + 0xcd0) = *(undefined8 *)(param_1 + 0xd00);
        }
        break;
      case 3:
        iVar5 = strncmp(pcVar10,"NVT",3);
        if (iVar5 == 0) {
          *(undefined8 *)(param_1 + 0xcd0) = *(undefined8 *)(param_1 + 0xd20);
        }
        iVar5 = strncmp(pcVar10,"SUNWODA",7);
        if (iVar5 == 0) {
          *(undefined8 *)(param_1 + 0xcd0) = *(undefined8 *)(param_1 + 0xd28);
        }
        break;
      case 5:
        *(undefined8 *)(param_1 + 0xcc0) = *(undefined8 *)(param_1 + 0xce0);
        *(undefined8 *)(param_1 + 0xcc8) = *(undefined8 *)(param_1 + 0xce8);
        *(undefined8 *)(param_1 + 0xcd8) = *(undefined8 *)(param_1 + 0xcf0);
        iVar5 = strncmp(pcVar10,"NVT",3);
        if ((iVar5 == 0) &&
           (*(undefined8 *)(param_1 + 0xcd0) = *(undefined8 *)(param_1 + 0xcf8),
           *(char *)(param_1 + 0xd98) != '\0')) {
          of_property_read_string(uVar9,"mi,cycle_volt_gl_nvt",param_1 + 0xcc0);
        }
        iVar5 = strncmp(pcVar10,"SUNWODA",7);
        if ((iVar5 == 0) &&
           (*(undefined8 *)(param_1 + 0xcd0) = *(undefined8 *)(param_1 + 0xd00),
           *(char *)(param_1 + 0xd98) != '\0')) {
          pcVar10 = "mi,cycle_volt_gl_sunwoda";
          goto LAB_00118a1c;
        }
      }
    }
switchD_00118864_caseD_1:
    if (*(char *)(param_1 + 0xcba) != '\0') {
      DAT_00100120 = 0x2c746c;
      ut_test_show_str._0_1_ = 'c';
      ut_test_show_str._1_1_ = 'y';
      ut_test_show_str._2_1_ = 'c';
      ut_test_show_str._3_1_ = 'l';
      ut_test_show_str._4_1_ = 'e';
      ut_test_show_str._5_1_ = '_';
      ut_test_show_str._6_1_ = 'v';
      ut_test_show_str._7_1_ = 'o';
      sVar6 = strnlen((char *)&ut_test_show_str,0x401);
      if (sVar6 < 0x402) {
        if (sVar6 != 0x401) {
          pcVar10 = *(char **)(param_1 + 0xcc0);
          sVar7 = strlen(pcVar10);
          snprintf((char *)((long)&ut_test_show_str + sVar6),sVar7 + 1,pcVar10);
          sVar6 = strnlen((char *)&ut_test_show_str,0x401);
          if (0x401 < sVar6) goto LAB_00118a2c;
          if (sVar6 != 0x401) {
            (&DAT_00100128)[sVar6] = 0;
            builtin_strncpy((char *)((long)&ut_test_show_str + sVar6),"cycle_st",8);
            builtin_strncpy((char *)((long)&DAT_00100120 + sVar6),"ep_curr,",8);
            sVar6 = strnlen((char *)&ut_test_show_str,0x401);
            if (0x401 < sVar6) goto LAB_00118a2c;
            if (sVar6 != 0x401) {
              pcVar10 = *(char **)(param_1 + 0xcc8);
              sVar7 = strlen(pcVar10);
              snprintf((char *)((long)&ut_test_show_str + sVar6),sVar7 + 1,pcVar10);
              sVar6 = strnlen((char *)&ut_test_show_str,0x401);
              if (0x401 < sVar6) goto LAB_00118a2c;
              if (sVar6 != 0x401) {
                builtin_strncpy((char *)((long)&ut_test_show_str + sVar6),"temp_ter",8);
                builtin_strncpy((char *)((long)&DAT_00100120 + sVar6),"m_curr,",8);
                sVar6 = strnlen((char *)&ut_test_show_str,0x401);
                if (0x401 < sVar6) goto LAB_00118a2c;
                if (sVar6 != 0x401) {
                  pcVar10 = *(char **)(param_1 + 0xcd0);
                  sVar7 = strlen(pcVar10);
                  snprintf((char *)((long)&ut_test_show_str + sVar6),sVar7 + 1,pcVar10);
                  sVar6 = strnlen((char *)&ut_test_show_str,0x401);
                  if (0x401 < sVar6) goto LAB_00118a2c;
                  if (sVar6 != 0x401) {
                    *(undefined1 *)((long)&DAT_00100120 + sVar6) = 0;
                    builtin_strncpy((char *)((long)&ut_test_show_str + sVar6),"thermal,",8);
                    sVar6 = strnlen((char *)&ut_test_show_str,0x401);
                    if (0x401 < sVar6) goto LAB_00118a2c;
                    if (sVar6 != 0x401) {
                      pcVar10 = *(char **)(param_1 + 0xcd8);
                      sVar7 = strlen(pcVar10);
                      snprintf((char *)((long)&ut_test_show_str + sVar6),sVar7 + 1,pcVar10);
                      goto LAB_0011871c;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
LAB_00118a2c:
        fortify_panic("strnlen");
      }
LAB_00118a38:
      fortify_panic("__fortify_strlen");
      goto LAB_00118a44;
    }
  }
  else if (sVar6 == 0x401) goto LAB_00118a38;
LAB_0011871c:
  iVar5 = scnprintf(param_3,0x1000,&DAT_00105295,&ut_test_show_str);
  lVar3 = sp_el0;
  if (*(long *)(lVar3 + 0x638) == local_58) {
    return (long)iVar5;
  }
LAB_00118a44:
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



long cloud_fod_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x638);
  uStack_100 = 0;
  local_118 = 0x10000800a;
  local_110 = *(undefined4 *)(param_1 + 0x254);
  local_108 = 7;
  local_40 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_f8 = 0;
  uStack_10c = 0x55;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_118,0xdc);
  if (-1 < iVar2) {
    _printk(&DAT_00102db8,"cloud_fod_show",param_1 + 0xaf0);
    iVar2 = scnprintf(param_3,0x1000,&DAT_0010392a,param_1 + 0xaf0);
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_38) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void cloud_fod_store(long param_1,undefined8 param_2,char *param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined1 local_118;
  char local_117 [199];
  uint uStack_50;
  long local_48;
  
  lVar1 = sp_el0;
  local_48 = *(long *)(lVar1 + 0x638);
  uStack_50 = 0;
  _printk(&DAT_00103fc9,"cloud_fod_store");
  _printk(&DAT_00104c5f,"cloud_fod_store",param_4);
  local_117[0] = '\0';
  local_117[1] = '\0';
  local_117[2] = '\0';
  local_117[3] = '\0';
  local_117[4] = '\0';
  local_117[5] = '\0';
  local_117[6] = '\0';
  local_117[7] = '\0';
  local_118 = 7;
  local_120 = *(undefined4 *)(param_1 + 600);
  local_128 = 0x10000800a;
  local_117[8] = '\0';
  local_117[9] = '\0';
  local_117[10] = '\0';
  local_117[0xb] = '\0';
  local_117[0xc] = '\0';
  local_117[0xd] = '\0';
  local_117[0xe] = '\0';
  local_117[0xf] = '\0';
  uStack_11c = 0x55;
  local_117[0x10] = '\0';
  local_117[0x11] = '\0';
  local_117[0x12] = '\0';
  local_117[0x13] = '\0';
  local_117[0x14] = '\0';
  local_117[0x15] = '\0';
  local_117[0x16] = '\0';
  local_117[0x17] = '\0';
  local_117[0x18] = '\0';
  local_117[0x19] = '\0';
  local_117[0x1a] = '\0';
  local_117[0x1b] = '\0';
  local_117[0x1c] = '\0';
  local_117[0x1d] = '\0';
  local_117[0x1e] = '\0';
  local_117[0x1f] = '\0';
  local_117[0x20] = '\0';
  local_117[0x21] = '\0';
  local_117[0x22] = '\0';
  local_117[0x23] = '\0';
  local_117[0x24] = '\0';
  local_117[0x25] = '\0';
  local_117[0x26] = '\0';
  local_117[0x27] = '\0';
  local_117[0x28] = '\0';
  local_117[0x29] = '\0';
  local_117[0x2a] = '\0';
  local_117[0x2b] = '\0';
  local_117[0x2c] = '\0';
  local_117[0x2d] = '\0';
  local_117[0x2e] = '\0';
  local_117[0x2f] = '\0';
  local_117[0x30] = '\0';
  local_117[0x31] = '\0';
  local_117[0x32] = '\0';
  local_117[0x33] = '\0';
  local_117[0x34] = '\0';
  local_117[0x35] = '\0';
  local_117[0x36] = '\0';
  local_117[0x37] = '\0';
  local_117[0x38] = '\0';
  local_117[0x39] = '\0';
  local_117[0x3a] = '\0';
  local_117[0x3b] = '\0';
  local_117[0x3c] = '\0';
  local_117[0x3d] = '\0';
  local_117[0x3e] = '\0';
  local_117[0x3f] = '\0';
  local_117[0x40] = '\0';
  local_117[0x41] = '\0';
  local_117[0x42] = '\0';
  local_117[0x43] = '\0';
  local_117[0x44] = '\0';
  local_117[0x45] = '\0';
  local_117[0x46] = '\0';
  local_117[0x47] = '\0';
  local_117[0x48] = '\0';
  local_117[0x49] = '\0';
  local_117[0x4a] = '\0';
  local_117[0x4b] = '\0';
  local_117[0x4c] = '\0';
  local_117[0x4d] = '\0';
  local_117[0x4e] = '\0';
  local_117[0x4f] = '\0';
  local_117[0x50] = '\0';
  local_117[0x51] = '\0';
  local_117[0x52] = '\0';
  local_117[0x53] = '\0';
  local_117[0x54] = '\0';
  local_117[0x55] = '\0';
  local_117[0x56] = '\0';
  local_117[0x57] = '\0';
  local_117[0x58] = '\0';
  local_117[0x59] = '\0';
  local_117[0x5a] = '\0';
  local_117[0x5b] = '\0';
  local_117[0x5c] = '\0';
  local_117[0x5d] = '\0';
  local_117[0x5e] = '\0';
  local_117[0x5f] = '\0';
  local_117[0x60] = '\0';
  local_117[0x61] = '\0';
  local_117[0x62] = '\0';
  local_117[99] = '\0';
  local_117[100] = '\0';
  local_117[0x65] = '\0';
  local_117[0x66] = '\0';
  local_117[0x67] = '\0';
  local_117[0x68] = '\0';
  local_117[0x69] = '\0';
  local_117[0x6a] = '\0';
  local_117[0x6b] = '\0';
  local_117[0x6c] = '\0';
  local_117[0x6d] = '\0';
  local_117[0x6e] = '\0';
  local_117[0x6f] = '\0';
  local_117[0x70] = '\0';
  local_117[0x71] = '\0';
  local_117[0x72] = '\0';
  local_117[0x73] = '\0';
  local_117[0x74] = '\0';
  local_117[0x75] = '\0';
  local_117[0x76] = '\0';
  local_117[0x77] = '\0';
  local_117[0x78] = '\0';
  local_117[0x79] = '\0';
  local_117[0x7a] = '\0';
  local_117[0x7b] = '\0';
  local_117[0x7c] = '\0';
  local_117[0x7d] = '\0';
  local_117[0x7e] = '\0';
  local_117[0x7f] = '\0';
  local_117[0x80] = '\0';
  local_117[0x81] = '\0';
  local_117[0x82] = '\0';
  local_117[0x83] = '\0';
  local_117[0x84] = '\0';
  local_117[0x85] = '\0';
  local_117[0x86] = '\0';
  local_117[0x87] = '\0';
  local_117[0x88] = '\0';
  local_117[0x89] = '\0';
  local_117[0x8a] = '\0';
  local_117[0x8b] = '\0';
  local_117[0x8c] = '\0';
  local_117[0x8d] = '\0';
  local_117[0x8e] = '\0';
  local_117[0x8f] = '\0';
  local_117[0x90] = '\0';
  local_117[0x91] = '\0';
  local_117[0x92] = '\0';
  local_117[0x93] = '\0';
  local_117[0x94] = '\0';
  local_117[0x95] = '\0';
  local_117[0x96] = '\0';
  local_117[0x97] = '\0';
  local_117[0x98] = '\0';
  local_117[0x99] = '\0';
  local_117[0x9a] = '\0';
  local_117[0x9b] = '\0';
  local_117[0x9c] = '\0';
  local_117[0x9d] = '\0';
  local_117[0x9e] = '\0';
  local_117[0x9f] = '\0';
  local_117[0xa0] = '\0';
  local_117[0xa1] = '\0';
  local_117[0xa2] = '\0';
  local_117[0xa3] = '\0';
  local_117[0xa4] = '\0';
  local_117[0xa5] = '\0';
  local_117[0xa6] = '\0';
  local_117[0xa7] = '\0';
  local_117[0xa8] = '\0';
  local_117[0xa9] = '\0';
  local_117[0xaa] = '\0';
  local_117[0xab] = '\0';
  local_117[0xac] = '\0';
  local_117[0xad] = '\0';
  local_117[0xae] = '\0';
  local_117[0xaf] = '\0';
  local_117[0xb0] = '\0';
  local_117[0xb1] = '\0';
  local_117[0xb2] = '\0';
  local_117[0xb3] = '\0';
  local_117[0xb4] = '\0';
  local_117[0xb5] = '\0';
  local_117[0xb6] = '\0';
  local_117[0xb7] = '\0';
  local_117[0xb8] = '\0';
  local_117[0xb9] = '\0';
  local_117[0xba] = '\0';
  local_117[0xbb] = '\0';
  local_117[0xbc] = '\0';
  local_117[0xbd] = '\0';
  local_117[0xbe] = '\0';
  local_117[0xbf] = '\0';
  local_117[0xc0] = '\0';
  local_117[0xc1] = '\0';
  local_117[0xc2] = '\0';
  local_117[0xc3] = '\0';
  local_117[0xc4] = '\0';
  local_117[0xc5] = '\0';
  local_117[0xc6] = '\0';
  uStack_50 = uStack_50 & 0xffffff00;
  if (param_4 < 0xc9) {
    strncpy(local_117,param_3,param_4);
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_128,0xdc);
    lVar1 = sp_el0;
    uVar3 = (long)iVar2;
    if (-1 < iVar2) {
      uVar3 = param_4;
    }
    if (*(long *)(lVar1 + 0x638) == local_48) {
      return;
    }
  }
  else {
    uVar3 = fortify_panic("strncpy");
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar3);
}



long reverse_quick_charge_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x10b00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_001036d3,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x42c));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void reverse_quick_charge_store(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar3 = sp_el0;
  local_28 = *(long *)(lVar3 + 0x638);
  local_44 = 0;
  iVar2 = kstrtoint(param_3,10,&local_44);
  if (iVar2 == 0) {
    local_38 = *(undefined4 *)(param_1 + 600);
    local_34 = 0x10b00000000;
    local_2c = local_44;
    local_40 = 0x10000800a;
    iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
    lVar3 = (long)iVar2;
    if (-1 < iVar2) {
      lVar3 = param_4;
    }
  }
  else {
    lVar3 = -0x16;
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) != local_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(lVar3);
  }
  return;
}



long last_node_show(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x638);
  local_34 = 0x10c00000000;
  local_38 = *(undefined4 *)(param_1 + 0x254);
  local_2c = 0;
  local_40 = 0x10000800a;
  iVar2 = battery_chg_write(param_1 + -8,(long)&local_40,0x18);
  if (-1 < iVar2) {
    iVar2 = scnprintf(param_3,0x1000,&DAT_00103287,
                      *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x430));
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x638) == local_28) {
    return (long)iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined8 battery_chg_get_max_charge_cntl_limit(long param_1,long *param_2)

{
  *param_2 = (long)*(int *)(*(long *)(param_1 + 0x3b0) + 0x29c);
  return 0;
}



undefined8 battery_chg_get_cur_charge_cntl_limit(long param_1,long *param_2)

{
  *param_2 = (long)*(int *)(*(long *)(param_1 + 0x3b0) + 0x290);
  return 0;
}



int battery_chg_set_cur_charge_cntl_limit(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = battery_psy_set_charge_current(*(long *)(param_1 + 0x3b0),param_2);
  return iVar1;
}



undefined8 add_xiaomi_uevent(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  char *param3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  char local_80 [56];
  long local_48;
  
  lVar2 = sp_el0;
  local_48 = *(long *)(lVar2 + 0x638);
  puVar6 = *(undefined8 **)(param_1 + 0x98);
  local_80[0x20] = '\0';
  local_80[0x21] = '\0';
  local_80[0x22] = '\0';
  local_80[0x23] = '\0';
  local_80[0x24] = '\0';
  local_80[0x25] = '\0';
  local_80[0x26] = '\0';
  local_80[0x27] = '\0';
  local_80[0x28] = '\0';
  local_80[0x29] = '\0';
  local_80[0x2a] = '\0';
  local_80[0x2b] = '\0';
  local_80[0x2c] = '\0';
  local_80[0x2d] = '\0';
  local_80[0x2e] = '\0';
  local_80[0x2f] = '\0';
  local_80[0x30] = '\0';
  local_80[0x31] = '\0';
  local_80[0x32] = '\0';
  local_80[0x10] = '\0';
  local_80[0x11] = '\0';
  local_80[0x12] = '\0';
  local_80[0x13] = '\0';
  local_80[0x14] = '\0';
  local_80[0x15] = '\0';
  local_80[0x16] = '\0';
  local_80[0x17] = '\0';
  local_80[0x18] = '\0';
  local_80[0x19] = '\0';
  local_80[0x1a] = '\0';
  local_80[0x1b] = '\0';
  local_80[0x1c] = '\0';
  local_80[0x1d] = '\0';
  local_80[0x1e] = '\0';
  local_80[0x1f] = '\0';
  local_80[0] = '\0';
  local_80[1] = '\0';
  local_80[2] = '\0';
  local_80[3] = '\0';
  local_80[4] = '\0';
  local_80[5] = '\0';
  local_80[6] = '\0';
  local_80[7] = '\0';
  local_80[8] = '\0';
  local_80[9] = '\0';
  local_80[10] = '\0';
  local_80[0xb] = '\0';
  local_80[0xc] = '\0';
  local_80[0xd] = '\0';
  local_80[0xe] = '\0';
  local_80[0xf] = '\0';
  param3 = (char *)get_zeroed_page(0xcc0);
  if (param3 != (char *)0x0) {
    local_84 = 0;
    local_8c = 0x3900000000;
    local_98 = 0x10000800a;
    local_90 = *(undefined4 *)((long)puVar6 + 0x25c);
    iVar4 = battery_chg_write((long)puVar6,(long)&local_98,0x18);
    if (-1 < iVar4) {
      scnprintf(param3,0x1000,&DAT_0010372f,*(undefined4 *)(puVar6[0x4a] + 0xe4));
    }
    snprintf(local_80,0x32,"POWER_SUPPLY_SOC_DECIMAL=%s",param3);
    add_uevent_var(param_2,local_80);
    local_84 = 0;
    local_98 = 0x10000800a;
    local_8c = 0x3a00000000;
    local_90 = *(undefined4 *)((long)puVar6 + 0x25c);
    iVar4 = battery_chg_write((long)puVar6,(long)&local_98,0x18);
    if (-1 < iVar4) {
      scnprintf(param3,0x1000,&DAT_0010372f,*(undefined4 *)(puVar6[0x4a] + 0xe8));
    }
    snprintf(local_80,0x32,"POWER_SUPPLY_SOC_DECIMAL_RATE=%s",param3);
    add_uevent_var(param_2,local_80);
    quick_charge_type_show((long)(puVar6 + 1),extraout_x1,param3);
    snprintf(local_80,0x32,"POWER_SUPPLY_QUICK_CHARGE_TYPE=%s",param3);
    add_uevent_var(param_2,local_80);
    shutdown_delay_show((long)(puVar6 + 1),extraout_x1_00,param3);
    snprintf(local_80,0x32,"POWER_SUPPLY_SHUTDOWN_DELAY=%s",param3);
    add_uevent_var(param_2,local_80);
    local_84 = 0;
    local_8c = 0x200000000;
    local_98 = 0x10000800a;
    local_90 = *(undefined4 *)((long)puVar6 + 0x25c);
    iVar4 = battery_chg_write((long)puVar6,(long)&local_98,0x18);
    if (-1 < iVar4) {
      scnprintf(param3,0x1000,&DAT_00106452,*(undefined4 *)(puVar6[0x4a] + 8));
    }
    snprintf(local_80,0x32,"POWER_SUPPLY_CONNECTOR_TEMP=%s",param3);
    add_uevent_var(param_2,local_80);
    local_84 = 0;
    local_98 = 0x10000800a;
    local_8c = 0x900000000;
    local_90 = *(undefined4 *)((long)puVar6 + 0x1cc);
    iVar4 = battery_chg_write((long)puVar6,(long)&local_98,0x18);
    if (-1 < iVar4) {
      scnprintf(param3,0x1000,&DAT_00106452,*(undefined4 *)(puVar6[0x38] + 0x24));
    }
    snprintf(local_80,0x32,"POWER_SUPPLY_MOISTURE_DET_STS=%s",param3);
    add_uevent_var(param_2,local_80);
    local_84 = 0;
    local_98 = 0x10000800a;
    local_8c = 0x7e00000000;
    local_90 = *(undefined4 *)((long)puVar6 + 0x25c);
    iVar4 = battery_chg_write((long)puVar6,(long)&local_98,0x18);
    if (-1 < iVar4) {
      scnprintf(param3,0x1000,&DAT_0010372f,*(undefined4 *)(puVar6[0x4a] + 0x1f8));
    }
    snprintf(local_80,0x32,"POWER_SUPPLY_CC_SHORT_VBUS=%s",param3);
    add_uevent_var(param_2,local_80);
    local_84 = 0;
    local_98 = 0x10000800a;
    local_8c = 0xb00000000;
    local_90 = *(undefined4 *)((long)puVar6 + 0x25c);
    iVar4 = battery_chg_write((long)puVar6,(long)&local_98,0x18);
    if (-1 < iVar4) {
      scnprintf(param3,0x1000,&DAT_0010372f,*(undefined4 *)(puVar6[0x4a] + 0x2c));
    }
    snprintf(local_80,0x32,"POWER_SUPPLY_NTC_ALARM=%s",param3);
    add_uevent_var(param_2,local_80);
    uVar1 = *(int *)(param_2 + 0x218) - 1;
    if (0x3f < uVar1) {
LAB_00119354:
                    // WARNING: Does not return
      pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x119358);
      (*pcVar3)();
    }
    _dev_err(*puVar6,&DAT_0010336e,*(undefined8 *)(param_2 + (ulong)uVar1 * 8 + 0x18));
    _dev_err(*puVar6,"currnet uevent info :");
    uVar5 = (ulong)*(uint *)(param_2 + 0x218);
    if (*(uint *)(param_2 + 0x218) != 0) {
      uVar7 = 0;
      do {
        if ((9 < uVar7) && ((uVar7 == 0xe || (4 < (int)uVar7 - 0xcU)))) {
          if (0x3f < uVar7) goto LAB_00119354;
          _dev_err(*puVar6,&DAT_0010336e,*(undefined8 *)(param_2 + 0x18 + uVar7 * 8));
          uVar5 = (ulong)*(uint *)(param_2 + 0x218);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar5);
    }
    free_pages(param3,0);
  }
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x638) == local_48) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void init_module(void)

{
  __platform_driver_register(&battery_chg_driver,&__this_module);
  return;
}



void cleanup_module(void)

{
  platform_driver_unregister(&battery_chg_driver);
  return;
}


