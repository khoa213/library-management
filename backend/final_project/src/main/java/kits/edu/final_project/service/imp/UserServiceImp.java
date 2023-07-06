package kits.edu.final_project.service.imp;

import kits.edu.final_project.entity.UserEntity;
import kits.edu.final_project.payload.request.SignupRequest;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public interface UserServiceImp {
    boolean addUser(SignupRequest request);
    List<UserEntity> getAllUser();
}
