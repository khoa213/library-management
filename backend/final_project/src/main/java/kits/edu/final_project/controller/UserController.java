package kits.edu.final_project.controller;

import kits.edu.final_project.entity.UserEntity;
import kits.edu.final_project.repository.UserRepository;

import kits.edu.final_project.service.imp.UserServiceImp;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RestController;

import java.util.ArrayList;
import java.util.List;

@RestController("/user")
public class UserController {
    @Autowired
    UserServiceImp userServiceImp;

    @GetMapping("")
   public ResponseEntity<?> getAllUser(){
        List<UserEntity> list =userServiceImp.getAllUser();
        for (UserEntity user:list) {
            System.out.println(user.getEmail());
        }
        return  new ResponseEntity<>("", HttpStatus.OK);
    }

}
