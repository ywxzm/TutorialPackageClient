//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_RET_BLACK_USERINFOHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_RET_BLACK_USERINFO packet = (GC_RET_BLACK_USERINFO)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            if (null != GameManager.gameManager.PlayerDataPool.BlackList)
            {
                for (int i = 0; i < packet.guidCount; ++i)
                {
                    Relation _relation = new Relation();
                    _relation.Guid = packet.guidList[i];
                    _relation.Level = packet.LevelList[i];
                    _relation.Profession = packet.ProfList[i];
                    _relation.CombatNum = packet.CombatList[i];
                    _relation.State = packet.StateList[i];
                    _relation.Name = packet.NameList[i];
                    _relation.TimeInfo = packet.TimeInfoList[i];

                    GameManager.gameManager.PlayerDataPool.BlackList.UpdateRelationUserInfo(_relation);
                }
            }

            //���º��ѽ��棨���δ�򿪣���UpdateFriendList��������
            if (null != GUIData.delFriendDataUpdate) GUIData.delFriendDataUpdate();
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}